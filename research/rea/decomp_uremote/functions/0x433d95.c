// rea decompile_all
// name: FUN_00433d95
// address: 0x433d95
// body: available
// range: 0x433d95-0x43405f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00433d95(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int local_40;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_10;
  undefined4 local_c;
  
  piVar4 = param_2 + 0x7d;
  *piVar4 = 0;
  *param_2 = 1;
  iVar5 = FUN_0040ffcd("postscript-cmaps");
  param_2[0x79] = iVar5;
  iVar6 = FUN_0040ffb6("psaux");
  param_2[0x7a] = iVar6;
  if (iVar6 == 0) {
    local_40 = 0xb;
  }
  else {
    local_40 = FUN_00433bb3();
    if ((local_40 == 0) && (-1 < param_3)) {
      if (param_3 < 1) {
        param_2[4] = param_2[0x68];
        param_2[9] = 0;
        param_2[1] = 0;
        param_2[2] = 0x211;
        if (*(char *)(param_2 + 0x27) != '\0') {
          param_2[2] = 0x215;
        }
        param_2[2] = param_2[2] | 0x800;
        pcVar7 = (char *)param_2[0x24];
        param_2[5] = pcVar7;
        param_2[6] = "Regular";
        if (pcVar7 == (char *)0x0) {
          if (param_2[0x5b] != 0) {
            param_2[5] = param_2[0x5b];
          }
        }
        else {
          pcVar8 = (char *)param_2[0x23];
          if (pcVar8 != (char *)0x0) {
            while (cVar2 = *pcVar8, cVar2 != '\0') {
              cVar1 = *pcVar7;
              if (cVar2 == cVar1) {
                pcVar7 = pcVar7 + 1;
LAB_00433e7a:
                pcVar8 = pcVar8 + 1;
              }
              else {
                if ((cVar2 == ' ') || (cVar2 == '-')) goto LAB_00433e7a;
                if ((cVar1 != ' ') && (cVar1 != '-')) {
                  if (*pcVar7 == '\0') {
                    param_2[6] = pcVar8;
                  }
                  break;
                }
                pcVar7 = pcVar7 + 1;
              }
            }
          }
        }
        local_24 = param_2[0x7b];
        local_20 = param_2[0x7c];
        param_2[7] = 0;
        param_2[8] = 0;
        local_28 = 1;
        if (param_4 != 0) {
          local_10 = param_4;
          local_28 = 0x11;
          local_c = param_5;
        }
        local_40 = FUN_0040ed53(*(undefined4 *)(param_2[0x18] + 4),&local_28,0,piVar4);
        if (local_40 == 0) {
          FUN_0040f18e(*(undefined4 *)(*piVar4 + 0x58));
          iVar3 = *piVar4;
          param_2[0xd] = *(undefined4 *)(iVar3 + 0x34);
          param_2[0xe] = *(undefined4 *)(iVar3 + 0x38);
          param_2[0xf] = *(undefined4 *)(iVar3 + 0x3c);
          param_2[0x10] = *(undefined4 *)(iVar3 + 0x40);
          *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(iVar3 + 0x44);
          *(undefined2 *)((int)param_2 + 0x46) = *(undefined2 *)(iVar3 + 0x46);
          *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(iVar3 + 0x48);
          *(undefined2 *)((int)param_2 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
          *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(iVar3 + 0x4c);
          *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)(iVar3 + 0x4e);
          *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
          *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
          param_2[3] = 0;
          if (param_2[0x26] != 0) {
            param_2[3] = 1;
          }
          if ((*(byte *)(iVar3 + 0xc) & 2) != 0) {
            param_2[3] = param_2[3] | 2;
          }
          if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
            param_2[2] = param_2[2] | 0x20;
          }
          if (iVar5 != 0) {
            piVar4 = *(int **)(iVar6 + 0x14);
            local_40 = FUN_0040f8e2(piVar4[3],0,0);
            if ((local_40 == 0) || (local_40 == 0xa3)) {
              iVar5 = param_2[0x5c];
              local_40 = 0;
              if (iVar5 == 1) {
                iVar5 = piVar4[2];
              }
              else if (iVar5 == 2) {
                iVar5 = *piVar4;
              }
              else if (iVar5 == 3) {
                iVar5 = piVar4[3];
              }
              else {
                if (iVar5 != 4) {
                  return 0;
                }
                iVar5 = piVar4[1];
              }
              if (iVar5 != 0) {
                local_40 = FUN_0040f8e2(iVar5,0,0);
              }
            }
          }
        }
      }
      else {
        local_40 = 6;
      }
    }
  }
  return local_40;
}

