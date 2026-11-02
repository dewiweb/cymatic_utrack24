// rea decompile_all
// name: FUN_0042f8f5
// address: 0x42f8f5
// body: available
// range: 0x42f8f5-0x42fc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f8f5(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *_Str1;
  int local_10;
  int local_c;
  int local_8;
  
  piVar5 = param_2;
  puVar3 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar4 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (_Str1 < pbVar4) {
    bVar1 = *_Str1;
    if ((bVar1 - 0x30 < 10) || (bVar1 == 0x5b)) {
      iVar6 = param_2[4];
      if (bVar1 != 0x5b) {
        local_c = (*(code *)param_2[9])(param_2);
      }
      else {
        local_c = 0x100;
        *param_2 = (int)(_Str1 + 1);
      }
      param_2._3_1_ = bVar1 == 0x5b;
      (*(code *)piVar5[7])(piVar5);
      if ((byte *)*piVar5 < pbVar4) {
        *(int *)(param_1 + 0x174) = local_c;
        piVar5[0x18] = local_c;
        uVar7 = FUN_00411976(2,0,&local_8);
        *(undefined4 *)(param_1 + 0x180) = uVar7;
        if (local_8 == 0) {
          uVar7 = FUN_00411976(4,0,&local_8);
          *(undefined4 *)(param_1 + 0x184) = uVar7;
          if (local_8 == 0) {
            local_8 = (**(code **)*puVar3)(piVar5 + 0x19,local_c,iVar6);
            if (local_8 == 0) {
              local_8 = 0;
              if (0 < local_c) {
                do {
                  (*(code *)piVar5[0x24])(piVar5 + 0x19,local_8,".notdef",8);
                  local_8 = local_8 + 1;
                } while (local_8 < local_c);
              }
              local_8 = 0;
              (*(code *)piVar5[7])(piVar5);
              do {
                if (pbVar4 <= (byte *)*piVar5) {
LAB_0042fc1e:
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *piVar5 = (int)_Str1;
                  return;
                }
                _Str1 = (byte *)*piVar5;
                bVar1 = *_Str1;
                if (((((bVar1 == 100) && (_Str1 + 3 < pbVar4)) && (_Str1[1] == 0x65)) &&
                    (_Str1[2] == 0x66)) &&
                   (((((bVar2 = _Str1[3], bVar2 == 0x20 || (bVar2 == 0xd)) ||
                      ((bVar2 == 10 || ((bVar2 == 9 || (bVar2 == 0xc)))))) ||
                     ((bVar2 == 0 ||
                      (((((bVar2 == 0x2f || (bVar2 == 0x28)) || (bVar2 == 0x29)) ||
                        ((bVar2 == 0x3c || (bVar2 == 0x3e)))) ||
                       (((bVar2 == 0x5b || ((bVar2 == 0x5d || (bVar2 == 0x7b)))) || (bVar2 == 0x7d))
                       )))))) || (bVar2 == 0x25)))) {
                  _Str1 = _Str1 + 3;
                  goto LAB_0042fc1e;
                }
                if (bVar1 == 0x5d) {
                  _Str1 = _Str1 + 1;
                  goto LAB_0042fc1e;
                }
                if (bVar1 - 0x30 < 10) {
                  if (param_2._3_1_) goto LAB_0042fba0;
                  local_10 = (*(code *)piVar5[9])(piVar5);
                  (*(code *)piVar5[7])(piVar5);
LAB_0042fbb5:
                  _Str1 = (byte *)*piVar5;
                  if (((*_Str1 == 0x2f) && (_Str1 + 2 < pbVar4)) && (local_8 < local_c)) {
                    _Str1 = _Str1 + 1;
                    *piVar5 = (int)_Str1;
                    (*(code *)piVar5[8])(piVar5);
                    if (piVar5[3] != 0) {
                      return;
                    }
                    iVar6 = *piVar5;
                    iVar8 = (*(code *)piVar5[0x24])
                                      (piVar5 + 0x19,local_10,_Str1,(iVar6 - (int)_Str1) + 1);
                    piVar5[3] = iVar8;
                    if (iVar8 != 0) {
                      return;
                    }
                    local_8 = local_8 + 1;
                    *(undefined1 *)((iVar6 - (int)_Str1) + *(int *)(piVar5[0x1f] + local_10 * 4)) =
                         0;
                  }
                  else if (param_2._3_1_) {
                    piVar5[3] = 2;
                    return;
                  }
                }
                else {
                  if (param_2._3_1_) {
LAB_0042fba0:
                    local_10 = local_8;
                    goto LAB_0042fbb5;
                  }
                  (*(code *)piVar5[8])(piVar5);
                  if (piVar5[3] != 0) {
                    return;
                  }
                }
                (*(code *)piVar5[7])(piVar5);
              } while( true );
            }
          }
        }
        piVar5[3] = local_8;
      }
    }
    else if ((_Str1 + 0x11 < pbVar4) &&
            (iVar6 = _strncmp((char *)_Str1,"StandardEncoding",0x10), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 2;
    }
    else if ((_Str1 + 0xf < pbVar4) &&
            (iVar6 = _strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 4;
    }
    else if ((_Str1 + 0x12 < pbVar4) &&
            (iVar6 = _strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 3;
    }
    else {
      param_2[3] = 0xa2;
    }
  }
  else {
    param_2[3] = 3;
  }
  return;
}

