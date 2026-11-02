// rea decompile_all
// name: FUN_00407879
// address: 0x407879
// body: available
// range: 0x407879-0x407c9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00407879(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *_Dst;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined2 local_14;
  ushort local_12;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  local_c = param_2[0x19];
  local_8 = FUN_0041106d();
  if (local_8 == 0) {
    local_24 = 0;
    local_2c = 1;
    local_28 = 1;
    local_20 = 8;
    local_8 = FUN_00407118(param_1,local_c,&local_2c,&local_10);
    uVar4 = local_10;
    if (local_8 == 0xb0) {
      FUN_004077e4(param_2);
      local_8 = 2;
    }
    else if (local_8 == 0) {
      param_2[1] = 0;
      param_2[0x23] = local_10;
      *param_2 = 1;
      param_2[2] = 0x92;
      iVar5 = FUN_0040751b();
      if ((((iVar5 != 0) && (*(int *)(iVar5 + 4) == 1)) && (*(char **)(iVar5 + 0xc) != (char *)0x0))
         && (((cVar1 = **(char **)(iVar5 + 0xc), cVar1 == 'M' || (cVar1 == 'm')) ||
             ((cVar1 == 'C' || (cVar1 == 'c')))))) {
        param_2[2] = param_2[2] | 4;
      }
      iVar5 = FUN_0040751b();
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0xc) == 0)) {
        param_2[5] = 0;
      }
      else {
        uVar6 = FUN_00411aaa(local_c,*(int *)(iVar5 + 0xc),&local_8);
        param_2[5] = uVar6;
        if (local_8 != 0) {
          return local_8;
        }
      }
      local_8 = FUN_00407627(param_2);
      if (local_8 == 0) {
        param_2[4] = *(int *)(uVar4 + 0x30) + 1;
        param_2[7] = 1;
        _Dst = (short *)FUN_00411976(0x10,0,&local_8);
        param_2[8] = _Dst;
        if (local_8 == 0) {
          local_10 = 0;
          sVar2 = 0;
          _memset(_Dst,0,0x10);
          *_Dst = *(short *)(uVar4 + 0x2c) + *(short *)(uVar4 + 0x28);
          iVar5 = FUN_0040751b();
          if (iVar5 == 0) {
            iVar5 = *_Dst * 2;
            iVar10 = 3;
          }
          else {
            iVar5 = *(int *)(iVar5 + 0xc) + 5;
            iVar10 = 10;
          }
          _Dst[1] = (short)(iVar5 / iVar10);
          iVar5 = FUN_0040751b();
          if (iVar5 == 0) {
            iVar5 = (int)_Dst[1] << 6;
          }
          else {
            iVar5 = (*(int *)(iVar5 + 0xc) * 0x70800 + 0x8d27) / 0x11a4e;
          }
          *(int *)(_Dst + 2) = iVar5;
          iVar5 = FUN_0040751b();
          if (iVar5 != 0) {
            *(int *)(_Dst + 6) = (int)*(short *)(iVar5 + 0xc) << 6;
          }
          iVar5 = FUN_0040751b();
          if (iVar5 != 0) {
            local_10 = (uint)*(ushort *)(iVar5 + 0xc);
          }
          iVar5 = FUN_0040751b();
          if (iVar5 != 0) {
            sVar2 = *(short *)(iVar5 + 0xc);
          }
          if (*(int *)(_Dst + 6) == 0) {
            *(int *)(_Dst + 6) = *(int *)(_Dst + 2);
            if (sVar2 != 0) {
              *(int *)(_Dst + 6) = ((int)sVar2 * *(int *)(_Dst + 2)) / 0x48;
            }
          }
          if (((short)local_10 == 0) || (sVar2 == 0)) {
            iVar5 = *(int *)(_Dst + 6);
          }
          else {
            iVar5 = ((int)(short)local_10 * *(int *)(_Dst + 6)) / (int)sVar2;
          }
          *(int *)(_Dst + 4) = iVar5;
          iVar5 = *(int *)(uVar4 + 0x38);
          uVar6 = FUN_00411976(8,0,&local_8);
          param_2[0x24] = uVar6;
          uVar7 = 0;
          if (local_8 == 0) {
            param_2[0x29] = 0;
            if (*(int *)(uVar4 + 0x30) != 0) {
              piVar9 = (int *)(iVar5 + 4);
              do {
                *(int *)(param_2[0x24] + uVar7 * 8) = *piVar9;
                *(short *)(param_2[0x24] + 4 + uVar7 * 8) = (short)uVar7;
                if ((*piVar9 == *(int *)(uVar4 + 0x24)) && (uVar7 != 0xffffffff)) {
                  param_2[0x29] = uVar7;
                }
                uVar7 = uVar7 + 1;
                piVar9 = piVar9 + 9;
              } while (uVar7 < *(uint *)(uVar4 + 0x30));
            }
            bVar3 = false;
            iVar5 = FUN_0040751b();
            iVar10 = FUN_0040751b();
            if (((((iVar5 == 0) || (iVar10 == 0)) || (*(int *)(iVar5 + 4) != 1)) ||
                ((*(int *)(iVar10 + 4) != 1 || (*(int *)(iVar5 + 0xc) == 0)))) ||
               (*(int *)(iVar10 + 0xc) == 0)) {
              local_14 = 7;
              local_12 = 0;
              local_1c = param_2;
              local_18 = 0x41444f42;
              local_8 = FUN_0040f8e2(&DAT_008fa430,0,0);
              if (param_2[9] != 0) {
                param_2[0x17] = *(undefined4 *)param_2[10];
              }
            }
            else {
              uVar6 = FUN_00411aaa(local_c,*(int *)(iVar10 + 0xc),&local_8);
              param_2[0x21] = uVar6;
              if (local_8 == 0) {
                pcVar8 = (char *)FUN_00411aaa(local_c,*(undefined4 *)(iVar5 + 0xc),&local_8);
                param_2[0x22] = pcVar8;
                if (local_8 == 0) {
                  if ((((*pcVar8 == 'i') || (*pcVar8 == 'I')) &&
                      ((pcVar8[1] == 's' || (pcVar8[1] == 'S')))) &&
                     ((pcVar8[2] == 'o' || (pcVar8[2] == 'O')))) {
                    iVar5 = _strcmp(pcVar8 + 3,"10646");
                    if ((iVar5 == 0) ||
                       ((iVar5 = _strcmp(pcVar8 + 3,"8859"), iVar5 == 0 &&
                        (iVar5 = _strcmp((char *)param_2[0x21],"1"), iVar5 == 0)))) {
                      bVar3 = true;
                    }
                  }
                  local_1c = param_2;
                  local_18 = 0;
                  local_14 = 0;
                  if (bVar3) {
                    local_14 = 3;
                    local_18 = 0x756e6963;
                  }
                  local_12 = (ushort)bVar3;
                  local_8 = FUN_0040f8e2(&DAT_008fa430,0,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}

