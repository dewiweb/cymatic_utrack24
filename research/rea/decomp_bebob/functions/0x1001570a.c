// rea decompile_all
// name: CFileException::OsErrorToException
// address: 0x1001570a
// body: available
// range: 0x1001570a-0x10015917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CFileException::OsErrorToException(long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int CFileException::OsErrorToException(long param_1)

{
  int iVar1;
  
  if (0x10b < (uint)param_1) {
    if (param_1 == 0x3e3) {
      return 10;
    }
    if (param_1 == 0x3e4) {
      return 10;
    }
    if (param_1 == 0x3e5) {
      return 10;
    }
    if (param_1 == 999) {
      return 5;
    }
    return 1;
  }
  if (param_1 == 0x10b) {
    return 3;
  }
  if ((uint)param_1 < 0x3f) {
    if (param_1 == 0x3e) {
      return 8;
    }
    if ((uint)param_1 < 0x1a) {
      if (param_1 == 0x19) {
        return 9;
      }
      switch(param_1) {
      case 0:
        return 0;
      default:
        return 1;
      case 2:
      case 6:
      case 0x12:
        goto LAB_10015842;
      case 3:
      case 0xf:
      case 0x11:
        goto LAB_10015842;
      case 4:
        return 4;
      case 5:
      case 0xc:
      case 0x13:
LAB_10015842:
        return 5;
      case 0xb:
LAB_10015842:
        return 6;
      case 0x10:
        return 7;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
LAB_10015842:
        return 10;
      case 0x18:
        return 9;
      }
    }
    if (0x27 < (uint)param_1) {
      switch(param_1) {
      case 0x34:
      case 0x35:
      case 0x37:
        goto LAB_10015842;
      case 0x36:
      case 0x3a:
        goto LAB_10015842;
      default:
        return 1;
      case 0x39:
      case 0x3b:
        goto LAB_10015842;
      case 0x3c:
        goto LAB_10015842;
      }
    }
    if (param_1 == 0x27) {
      return 0xd;
    }
    if (0x20 < (uint)param_1) {
      if (param_1 == 0x21) {
        return 0xc;
      }
      if (param_1 == 0x22) {
        return 3;
      }
      if (param_1 == 0x24) {
        return 4;
      }
      if (param_1 == 0x26) {
        return 0xe;
      }
      return 1;
    }
    if (param_1 == 0x20) {
      return 0xb;
    }
    if (param_1 == 0x1a) {
      return 6;
    }
    if (param_1 == 0x1b) {
      return 9;
    }
    iVar1 = param_1 + -0x1d;
    if (iVar1 == 0) {
      return 5;
    }
LAB_10015789:
    if (iVar1 == 1) {
      return 9;
    }
  }
  else {
    if ((uint)param_1 < 0x6c) {
      if (param_1 == 0x6b) {
LAB_10015842:
        return 2;
      }
      if (0x47 < (uint)param_1) {
        if (param_1 == 0x50) {
          return 5;
        }
        if (param_1 == 0x52) {
          return 5;
        }
        if (param_1 == 0x55) {
          return 3;
        }
        if (param_1 != 0x56) {
          if (param_1 == 0x58) {
            return 10;
          }
          return 1;
        }
        return 5;
      }
      if (param_1 == 0x47) {
        return 5;
      }
      if (param_1 == 0x40) {
        return 5;
      }
      if (param_1 == 0x41) {
        return 5;
      }
      if (param_1 == 0x42) {
        return 6;
      }
      if (param_1 == 0x43) {
        return 3;
      }
      iVar1 = param_1 + -0x44;
      if (iVar1 == 0) {
        return 4;
      }
    }
    else {
      if ((uint)param_1 < 0x91) {
        if (param_1 == 0x90) {
          return 3;
        }
        if ((uint)param_1 < 0x76) {
          if (param_1 == 0x75) {
            return 10;
          }
          if (param_1 == 0x6c) {
            return 0xc;
          }
          if (param_1 == 0x6f) {
            return 3;
          }
          if (param_1 == 0x70) {
            return 0xd;
          }
          if (param_1 == 0x71) {
            return 4;
          }
          if (param_1 != 0x72) {
            return 1;
          }
          return 6;
        }
        if (param_1 == 0x7b) {
          return 3;
        }
        if (param_1 == 0x7c) {
          return 3;
        }
        if (param_1 == 0x7d) {
          return 3;
        }
        iVar1 = param_1 + -0x83;
        if (iVar1 == 0) {
          return 9;
        }
        goto LAB_10015789;
      }
      if ((uint)param_1 < 0xb7) {
        if (param_1 == 0xb6) {
          return 6;
        }
        if (param_1 == 0x91) {
          return 7;
        }
        if (param_1 == 0x9a) {
          return 3;
        }
        if (param_1 != 0xa1) {
          if (param_1 == 0xa7) {
            return 0xc;
          }
          if (param_1 == 0xaa) {
            return 5;
          }
          return 1;
        }
        return 3;
      }
      if (param_1 == 0xb7) {
        return 5;
      }
      if (param_1 == 0xbf) {
        return 6;
      }
      if (param_1 == 0xc1) {
        return 6;
      }
      iVar1 = param_1 + -0xce;
      if (iVar1 == 0) {
        return 3;
      }
    }
    if (iVar1 == 2) {
LAB_10015842:
      return 3;
    }
  }
  return 1;
}

