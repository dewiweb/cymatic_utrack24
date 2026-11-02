// rea decompile_all
// name: FUN_0043598e
// address: 0x43598e
// body: available
// range: 0x43598e-0x435c49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043598e(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  size_t _Size;
  void *_Dst;
  short sVar8;
  char *_Str;
  
  iVar5 = param_3;
  puVar2 = param_2;
  param_2 = (undefined4 *)FUN_004352d5(param_3);
  if ((param_2 == (undefined4 *)0x0) && (iVar5 < 0)) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x2) {
    puVar3 = (undefined4 *)FUN_00411912(0xac,&param_2);
    puVar2[0x21] = puVar3;
    if (param_2 != (undefined4 *)0x0) {
      return (int)param_2;
    }
    *puVar2 = 1;
    *puVar3 = 0;
    puVar3[0x29] = *(undefined4 *)(param_1 + 4);
    param_2 = (undefined4 *)FUN_00435218(puVar3);
    if (param_2 != (undefined4 *)0x0) goto LAB_00435c07;
    if (0 < iVar5) {
      param_2 = (undefined4 *)0x6;
      goto LAB_00435c07;
    }
    if (iVar5 < 0) {
      return 0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = puVar2[0x21];
    puVar2[1] = iVar5;
    puVar2[2] = 0x12;
    if (*(short *)(iVar1 + 100) == *(short *)(iVar1 + 0x66)) {
      puVar2[2] = 0x16;
    }
    if (*(char *)(iVar1 + 0x56) != '\0') {
      puVar2[3] = puVar2[3] | 1;
    }
    if (799 < *(ushort *)(iVar1 + 0x5a)) {
      puVar2[3] = puVar2[3] | 2;
    }
    psVar4 = (short *)FUN_00411976(0x10,0,&param_2);
    puVar2[8] = psVar4;
    if (param_2 == (undefined4 *)0x0) {
      puVar2[7] = 1;
      psVar4[1] = *(short *)(iVar1 + 100);
      *psVar4 = *(short *)(iVar1 + 0x54) + *(short *)(iVar1 + 0x60);
      *(uint *)(psVar4 + 2) = (uint)*(ushort *)(iVar1 + 0x4a) << 6;
      param_2 = (undefined4 *)(uint)*(ushort *)(iVar1 + 0x4e);
      if (*(ushort *)(iVar1 + 0x4e) == 0) {
        param_2 = (undefined4 *)0x48;
      }
      sVar8 = *(short *)(iVar1 + 0x4c);
      if (sVar8 == 0) {
        sVar8 = 0x48;
      }
      iVar5 = FUN_0040d230(sVar8);
      uVar6 = iVar5 + 0x20U & 0xffffffc0;
      *(uint *)(psVar4 + 6) = uVar6;
      iVar5 = (uint)*(ushort *)(iVar1 + 0x60) * 0x40;
      if (iVar5 < (int)uVar6) {
        *(int *)(psVar4 + 6) = iVar5;
        uVar7 = FUN_0040d230(0x48);
        *(undefined4 *)(psVar4 + 2) = uVar7;
      }
      iVar5 = FUN_0040d230((uint)param_2 & 0xffff);
      *(uint *)(psVar4 + 4) = iVar5 + 0x20U & 0xffffffc0;
      param_2 = (undefined4 *)FUN_0040f8e2(&DAT_0090d290,0,0);
      if (param_2 == (undefined4 *)0x0) {
        if (puVar2[9] != 0) {
          puVar2[0x17] = *(undefined4 *)puVar2[10];
        }
        if (*(byte *)(iVar1 + 0x68) <= *(byte *)(iVar1 + 0x69)) {
          puVar2[4] = ((uint)*(byte *)(iVar1 + 0x69) - (uint)*(byte *)(iVar1 + 0x68)) + 2;
          if (*(uint *)(iVar1 + 0x74) < *(uint *)(iVar1 + 8)) {
            _Size = *(uint *)(iVar1 + 8) - *(uint *)(iVar1 + 0x74);
            _Dst = (void *)FUN_00411912(_Size + 1,&param_2);
            *(void **)(iVar1 + 0xa8) = _Dst;
            if (param_2 == (undefined4 *)0x0) {
              _memcpy(_Dst,(void *)(*(int *)(iVar1 + 0xa0) + *(int *)(iVar1 + 0x74)),_Size);
              puVar3 = &param_2;
              *(undefined1 *)(_Size + *(int *)(iVar1 + 0xa8)) = 0;
              _Str = *(char **)(iVar1 + 0xa8);
              _strlen(_Str);
              uVar7 = FUN_00411976(1,_Str,puVar3);
              *(undefined4 *)(iVar1 + 0xa8) = uVar7;
              if (param_2 == (undefined4 *)0x0) {
                puVar2[5] = uVar7;
                uVar6 = puVar2[3];
                puVar2[6] = "Regular";
                if ((uVar6 & 2) == 0) {
                  if ((uVar6 & 1) == 0) {
                    return 0;
                  }
                  puVar2[6] = "Italic";
                  return 0;
                }
                if ((uVar6 & 1) != 0) {
                  puVar2[6] = "Bold Italic";
                  return 0;
                }
                puVar2[6] = &DAT_0090ed14;
                return 0;
              }
            }
            goto LAB_00435c07;
          }
        }
        param_2 = (undefined4 *)0x3;
      }
    }
  }
LAB_00435c07:
  FUN_00435966(puVar2);
  return (int)param_2;
}

