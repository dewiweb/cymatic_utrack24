// rea decompile_all
// name: FUN_005f8880
// address: 0x5f8880
// body: available
// range: 0x5f8880-0x5f98c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8880(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            iVar3 = 0;
            if (0 < param_2) {
              param_6 = param_6 + -1;
              do {
                iVar2 = __allshr();
                param_6 = param_6 + 1;
                iVar1 = iVar3 * 4;
                iVar3 = iVar3 + 1;
                *param_6 = iVar2 + *(int *)(param_1 + iVar1);
              } while (iVar3 < param_2);
              return;
            }
          }
          else if (0 < param_2) {
            piVar4 = param_6;
            do {
              iVar3 = __allshr();
              *piVar4 = iVar3 + *(int *)((param_1 - (int)param_6) + (int)piVar4);
              param_2 = param_2 + -1;
              piVar4 = piVar4 + 1;
            } while (param_2 != 0);
            return;
          }
        }
        else {
          iVar3 = 0;
          if (param_4 == 4) {
            if (0 < param_2) {
              piVar4 = param_6 + -3;
              do {
                iVar2 = __allshr();
                iVar1 = iVar3 * 4;
                iVar3 = iVar3 + 1;
                piVar4[3] = iVar2 + *(int *)(param_1 + iVar1);
                piVar4 = piVar4 + 1;
              } while (iVar3 < param_2);
              return;
            }
          }
          else if (0 < param_2) {
            piVar4 = param_6 + -2;
            do {
              iVar2 = __allshr();
              iVar1 = iVar3 * 4;
              iVar3 = iVar3 + 1;
              piVar4[2] = iVar2 + *(int *)(param_1 + iVar1);
              piVar4 = piVar4 + 1;
            } while (iVar3 < param_2);
            return;
          }
        }
      }
      else {
        local_1c = 0;
        if (param_4 < 7) {
          if (param_4 == 6) {
            if (0 < param_2) {
              piVar4 = param_6 + -5;
              do {
                iVar1 = __allshr();
                iVar3 = local_1c * 4;
                local_1c = local_1c + 1;
                piVar4[5] = iVar1 + *(int *)(param_1 + iVar3);
                piVar4 = piVar4 + 1;
              } while (local_1c < param_2);
              return;
            }
          }
          else if (0 < param_2) {
            piVar4 = param_6 + -4;
            do {
              iVar1 = __allshr();
              iVar3 = local_1c * 4;
              local_1c = local_1c + 1;
              piVar4[4] = iVar1 + *(int *)(param_1 + iVar3);
              piVar4 = piVar4 + 1;
            } while (local_1c < param_2);
            return;
          }
        }
        else if (param_4 == 8) {
          if (0 < param_2) {
            piVar4 = param_6 + -7;
            do {
              iVar1 = __allshr();
              iVar3 = local_1c * 4;
              local_1c = local_1c + 1;
              piVar4[7] = iVar1 + *(int *)(param_1 + iVar3);
              piVar4 = piVar4 + 1;
            } while (local_1c < param_2);
            return;
          }
        }
        else if (0 < param_2) {
          piVar4 = param_6 + -6;
          do {
            iVar1 = __allshr();
            iVar3 = local_1c * 4;
            local_1c = local_1c + 1;
            piVar4[6] = iVar1 + *(int *)(param_1 + iVar3);
            piVar4 = piVar4 + 1;
          } while (local_1c < param_2);
          return;
        }
      }
    }
    else {
      local_1c = 0;
      if (param_4 < 0xb) {
        if (param_4 == 10) {
          if (0 < param_2) {
            piVar4 = param_6 + -9;
            do {
              iVar1 = __allshr();
              iVar3 = local_1c * 4;
              local_1c = local_1c + 1;
              piVar4[9] = iVar1 + *(int *)(param_1 + iVar3);
              piVar4 = piVar4 + 1;
            } while (local_1c < param_2);
            return;
          }
        }
        else if (0 < param_2) {
          piVar4 = param_6 + -8;
          do {
            iVar1 = __allshr();
            iVar3 = local_1c * 4;
            local_1c = local_1c + 1;
            piVar4[8] = iVar1 + *(int *)(param_1 + iVar3);
            piVar4 = piVar4 + 1;
          } while (local_1c < param_2);
          return;
        }
      }
      else if (param_4 == 0xc) {
        if (0 < param_2) {
          piVar4 = param_6 + -0xb;
          do {
            iVar1 = __allshr();
            iVar3 = local_1c * 4;
            local_1c = local_1c + 1;
            piVar4[0xb] = iVar1 + *(int *)(param_1 + iVar3);
            piVar4 = piVar4 + 1;
          } while (local_1c < param_2);
          return;
        }
      }
      else if (0 < param_2) {
        piVar4 = param_6 + -10;
        do {
          iVar1 = __allshr();
          iVar3 = local_1c * 4;
          local_1c = local_1c + 1;
          piVar4[10] = iVar1 + *(int *)(param_1 + iVar3);
          piVar4 = piVar4 + 1;
        } while (local_1c < param_2);
        return;
      }
    }
  }
  else {
    local_18 = 0;
    if (0 < param_2) {
      param_6 = param_6 + -0x1f;
      do {
        switch(param_4) {
        case 0xd:
          break;
        case 0xe:
          break;
        case 0xf:
          break;
        case 0x10:
          break;
        case 0x11:
          break;
        case 0x12:
          break;
        case 0x13:
          break;
        case 0x14:
          break;
        case 0x15:
          break;
        case 0x16:
          break;
        case 0x17:
          break;
        case 0x18:
          break;
        case 0x19:
          break;
        case 0x1a:
          break;
        case 0x1b:
          break;
        case 0x1c:
          break;
        case 0x1d:
          break;
        case 0x1e:
          break;
        case 0x1f:
          break;
        case 0x20:
        }
        iVar1 = __allshr();
        iVar3 = local_18 * 4;
        local_18 = local_18 + 1;
        param_6[0x1f] = iVar1 + *(int *)(param_1 + iVar3);
        param_6 = param_6 + 1;
      } while (local_18 < param_2);
    }
  }
  return;
}

