#!/usr/bin/env python3
#
# Copyright 2017 Tomas Popela <tpopela@redhat.com>
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
# CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
# TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
# SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

import re
import subprocess
import sys
import os


def main():
    """Checks whether the required Apache modules are available and prints their
       paths to stdout (values are separated by colons).

       Only one argument is required - path to the Apache httpd2 executable"""

    if len(sys.argv) != 2:
        print('Only argument with path to the Apache httpd executable expected!', file=sys.stderr)
        sys.exit(1)

    httpd_executable = sys.argv[1]

    if not os.path.isfile(httpd_executable):
        print('The passed Apache httpd executable does not exist!', file=sys.stderr)
        sys.exit(1)

    apache_prefix = os.path.dirname(os.path.dirname(httpd_executable))
    apache_httpd_output = subprocess.run(
        [httpd_executable, '-V', '-C', 'ServerName localhost'], stdout=subprocess.PIPE)
    if apache_httpd_output.returncode != 0:
        print('Something went wrong when calling Apache httpd executable!', file=sys.stderr)
        sys.exit(1)

    mpm_regex = re.compile(r'\nServer MPM:[\s]+([\w]+)\n')
    mpm = mpm_regex.search(apache_httpd_output.stdout.decode('utf-8')).group(1).lower()

    apache_module_dir = ''
    apache_ssl_module_dir = ''
    apache_php_module_dir = ''

    for lib_dir in ['/lib', '/lib64']:
        for httpd_dir in ['apache', 'apache2', 'http', 'http2', 'httpd']:
            for mpm_suffix in ['', '-' + mpm]:
                for modules_dir in ['/', '/modules/']:
                    modules_path = apache_prefix + lib_dir + '/' + httpd_dir + mpm_suffix + modules_dir
                    if os.path.isfile(modules_path + 'mod_auth_digest.so'):
                        apache_module_dir = modules_path
                    if os.path.isfile(modules_path + 'mod_ssl.so'):
                        apache_ssl_module_dir = modules_path
                    if os.path.isfile(modules_path + 'libphp7.so'):
                        apache_php_module_dir = modules_path

    print(apache_module_dir + ":" + apache_ssl_module_dir + ":" + apache_php_module_dir, end='')

if __name__ == "__main__":
    main()