// rea decompile_all
// name: FUN_004345e2
// address: 0x4345e2
// body: available
// range: 0x4345e2-0x43489c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004345e2(int param_1,int *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte extraout_CL;
  byte bVar7;
  byte *_Str1;
  uint local_10;
  uint local_c;
  uint local_8;
  
  piVar3 = param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar2 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (_Str1 < pbVar2) {
    bVar7 = *_Str1;
    if ((bVar7 - 0x30 < 10) || (bVar7 == 0x5b)) {
      iVar4 = param_2[4];
      if (bVar7 != 0x5b) {
        local_c = (*(code *)param_2[9])(param_2);
      }
      else {
        local_c = 0x100;
        *param_2 = (int)(_Str1 + 1);
      }
      param_2._3_1_ = bVar7 == 0x5b;
      (*(code *)piVar3[7])(piVar3);
      if (pbVar2 <= (byte *)*piVar3) {
        return;
      }
      *(uint *)(param_1 + 0x174) = local_c;
      piVar3[0x16] = local_c;
      uVar5 = FUN_00411976(2,0,&local_8);
      *(undefined4 *)(param_1 + 0x180) = uVar5;
      if (local_8 == 0) {
        uVar5 = FUN_00411976(4,0,&local_8);
        *(undefined4 *)(param_1 + 0x184) = uVar5;
        if (local_8 == 0) {
          local_8 = (**(code **)*puVar1)(piVar3 + 0x17,local_c,iVar4);
          if (local_8 == 0) {
            local_8 = 0;
            if (local_c != 0) {
              do {
                (*(code *)piVar3[0x22])(piVar3 + 0x17,local_8,".notdef",8);
                local_8 = local_8 + 1;
              } while (local_8 < local_c);
            }
            local_8 = 0;
            (*(code *)piVar3[7])(piVar3);
            do {
              if (pbVar2 <= (byte *)*piVar3) {
LAB_00434884:
                *(undefined4 *)(param_1 + 0x170) = 1;
                *piVar3 = (int)_Str1;
                return;
              }
              _Str1 = (byte *)*piVar3;
              bVar7 = *_Str1;
              if ((((bVar7 == 100) && (_Str1 + 3 < pbVar2)) && (_Str1[1] == 0x65)) &&
                 ((_Str1[2] == 0x66 && (iVar4 = FUN_004344fc(), bVar7 = extraout_CL, iVar4 != 0))))
              {
                _Str1 = _Str1 + 3;
                goto LAB_00434884;
              }
              if (bVar7 == 0x5d) {
                _Str1 = _Str1 + 1;
                goto LAB_00434884;
              }
              if (bVar7 - 0x30 < 10) {
                if (param_2._3_1_) goto LAB_00434806;
                local_10 = (*(code *)piVar3[9])(piVar3);
                (*(code *)piVar3[7])(piVar3);
LAB_0043481b:
                _Str1 = (byte *)*piVar3;
                if (((*_Str1 == 0x2f) && (_Str1 + 2 < pbVar2)) && (local_8 < local_c)) {
                  _Str1 = _Str1 + 1;
                  *piVar3 = (int)_Str1;
                  (*(code *)piVar3[8])(piVar3);
                  if (piVar3[3] != 0) {
                    return;
                  }
                  iVar4 = *piVar3;
                  iVar6 = (*(code *)piVar3[0x22])
                                    (piVar3 + 0x17,local_10,_Str1,(iVar4 - (int)_Str1) + 1);
                  piVar3[3] = iVar6;
                  if (iVar6 != 0) {
                    return;
                  }
                  local_8 = local_8 + 1;
                  *(undefined1 *)((iVar4 - (int)_Str1) + *(int *)(piVar3[0x1d] + local_10 * 4)) = 0;
                }
              }
              else {
                if (param_2._3_1_) {
LAB_00434806:
                  local_10 = local_8;
                  goto LAB_0043481b;
                }
                (*(code *)piVar3[8])(piVar3);
                if (piVar3[3] != 0) {
                  return;
                }
              }
              (*(code *)piVar3[7])(piVar3);
            } while( true );
          }
        }
      }
      piVar3[3] = local_8;
      return;
    }
    if ((_Str1 + 0x11 < pbVar2) &&
       (iVar4 = _strncmp((char *)_Str1,"StandardEncoding",0x10), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 2;
      return;
    }
    if ((_Str1 + 0xf < pbVar2) && (iVar4 = _strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar4 == 0)
       ) {
      *(undefined4 *)(param_1 + 0x170) = 4;
      return;
    }
    if ((_Str1 + 0x12 < pbVar2) &&
       (iVar4 = _strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 3;
      return;
    }
  }
  param_2[3] = 3;
  return;
}

