// rea decompile_all
// name: FUN_004f3d35
// address: 0x4f3d35
// body: available
// range: 0x4f3d35-0x4f44a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f3d35(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  int *piVar5;
  
  if (param_2 < 0x103) {
    if (param_2 != 0x102) {
      if (param_2 < 0x7f) {
        if (param_2 == 0x7e) {
          InvalidateRect(param_1,(RECT *)0x0,0);
        }
        else {
          if (param_2 < 0x15) {
            if (param_2 != 0x14) {
              if (param_2 == 6) {
                if (((short)param_3 == 1) || ((short)param_3 == 2)) {
                  FUN_004f3ac9();
                  return 0;
                }
              }
              else if (param_2 == 7) {
                FUN_004f1b01();
                FUN_004edbe4();
              }
              else if (param_2 == 8) {
                if (*(char *)((int)in_EAX + 0x5b) != '\0') {
                  *(undefined1 *)((int)in_EAX + 0x5b) = 0;
                  DestroyCaret();
                }
                FUN_004edc64();
              }
              else {
                if (param_2 == 0xf) {
                  FUN_004f2652();
                  return 0;
                }
                if (param_2 == 0x10) {
                  cVar1 = FUN_004c14d9();
                  if (cVar1 != '\0') {
                    return 0;
                  }
                  FUN_004ee31c();
                  return 0;
                }
                if (param_2 == 0x11) {
                  if (DAT_0095d678 == (int *)0x0) {
                    return 1;
                  }
                  (**(code **)(*DAT_0095d678 + 0x1c))();
                  iVar2 = FUN_00473bb8();
                  return (uint)*(byte *)(iVar2 + 4);
                }
              }
              goto LAB_004f3de5;
            }
LAB_004f3f73:
            uVar3 = in_EAX[2];
LAB_004f3f60:
            if ((uVar3 >> 3 & 1) == 0) {
              return 1;
            }
            goto LAB_004f3de5;
          }
          if (param_2 == 0x18) {
            if (param_3 != 0) {
              (**(code **)(*(int *)in_EAX[1] + 0x28))();
              FUN_004eda2a();
            }
            goto LAB_004f3de5;
          }
          if (param_2 != 0x1a) {
            if (param_2 == 0x1c) {
              if (param_3 == 0) {
                FUN_004c4e62();
                FUN_004c560e();
              }
              else {
                FUN_0041f3a2();
              }
              FUN_004ef947();
              FUN_004c751a();
              FUN_00476147();
              return 0;
            }
            if (param_2 == 0x21) {
              cVar1 = FUN_004c2ded();
              if (cVar1 == '\0') {
                return 3;
              }
              goto LAB_004f3de5;
            }
            if (param_2 == 0x46) {
              uVar3 = FUN_004f3891();
              return uVar3;
            }
            if (param_2 != 0x47) goto LAB_004f3de5;
            cVar1 = FUN_004f3a4f();
            goto LAB_004f42f7;
          }
        }
        FUN_004f3c06();
        goto LAB_004f3de5;
      }
      if (param_2 < 0xa1) {
        if (param_2 == 0xa0) {
LAB_004f3f3e:
          uVar3 = (uint)in_EAX[2] >> 3 & 1;
        }
        else {
          if (param_2 == 0x83) goto LAB_004f3f73;
          if (param_2 == 0x84) {
            uVar3 = in_EAX[2];
            if ((uVar3 & 4) != 0) {
              return 0xffffffff;
            }
            goto LAB_004f3f60;
          }
          if (param_2 == 0x85) {
            if (param_3 != 1) {
              FUN_004f2652();
            }
            goto LAB_004f3f3e;
          }
          if (param_2 == 0x86) {
            if ((param_3 == 0) && (DAT_00957684 == '\0')) {
              param_3 = 1;
            }
            goto LAB_004f3de5;
          }
          if (param_2 == 0x87) {
            return 4;
          }
          uVar3 = param_2 - 0x88;
        }
        if (uVar3 == 0) {
          return 0;
        }
        goto LAB_004f3de5;
      }
      if (param_2 == 0xa1) {
        FUN_004f3b62();
        goto LAB_004f3de5;
      }
      if ((param_2 == 0xa4) || (param_2 == 0xa7)) {
        cVar1 = FUN_004c14d9();
        if (cVar1 != '\0') {
          FUN_004f44a1();
        }
        goto LAB_004f3de5;
      }
      if (param_2 == 0x100) goto LAB_004f421c;
      if (param_2 != 0x101) goto LAB_004f3de5;
      goto LAB_004f3f9b;
    }
    cVar1 = FUN_004f35cf();
    if (cVar1 != '\0') {
      return 0;
    }
    uVar3 = 0x102;
  }
  else {
    if (0x205 < param_2) {
      if (0x218 < param_2) {
        if (param_2 == 0x240) {
          if (DAT_0095d6b0 != 0) {
            uVar3 = FUN_004f3022();
            return uVar3;
          }
        }
        else if (param_2 == 0x281) {
          FUN_004f44b7();
          param_4 = param_4 & 0x7fffffff;
        }
        else {
          if (param_2 == 0x2a3) {
            *(undefined1 *)((int)in_EAX + 0x5a) = 0;
            FUN_004f3d16(&stack0xffffffe0);
            FUN_004f2bc6(in_EAX);
            return 0;
          }
          if (((param_2 != 0x2e0) && (param_2 == 0x319)) && (cVar1 = FUN_004f3673(), cVar1 != '\0'))
          {
            return 1;
          }
        }
        goto LAB_004f3de5;
      }
      if (param_2 != 0x218) {
        if (param_2 == 0x207) goto LAB_004f4280;
        if (param_2 != 0x208) {
          if ((param_2 == 0x20a) || (param_2 == 0x20e)) {
            FUN_004f2e56();
            return 0;
          }
          if (param_2 == 0x214) {
            uVar3 = FUN_004f374a();
            return uVar3;
          }
          if (param_2 != 0x215) goto LAB_004f3de5;
          if ((char)in_EAX[0x17] != '\0') {
            if ((int *)in_EAX[7] != (int *)0x0) {
              (**(code **)(*(int *)in_EAX[7] + 0xc))();
            }
            *(undefined1 *)(in_EAX + 0x17) = 0;
          }
          if (*(char *)((int)in_EAX + 0x59) == '\0') {
            return 0;
          }
          FUN_004f3d16(&stack0xffffffe0);
          param_3 = 0;
        }
LAB_004f43b6:
        FUN_004f2d98(param_3);
        return 0;
      }
      if (DAT_0095d678 == (int *)0x0) goto LAB_004f3de5;
      if (param_3 != 2) {
        if (param_3 == 4) {
          (**(code **)(*DAT_0095d678 + 0x20))();
          goto LAB_004f3de5;
        }
        if ((param_3 < 6) || ((7 < param_3 && (param_3 != 0x12)))) goto LAB_004f3de5;
      }
      (**(code **)(*DAT_0095d678 + 0x24))();
      goto LAB_004f3de5;
    }
    if (param_2 == 0x205) goto LAB_004f43b6;
    if (0x116 < param_2) {
      if (param_2 != 0x119) {
        if (param_2 == 0x120) {
          return 0x10000;
        }
        if (param_2 == 0x200) {
          FUN_004f2c42();
          return 0;
        }
        if (param_2 != 0x201) {
          if (param_2 == 0x202) goto LAB_004f43b6;
          if (param_2 != 0x204) goto LAB_004f3de5;
        }
LAB_004f4280:
        FUN_004f2d36(param_3);
        return 0;
      }
      cVar1 = FUN_004f2f19();
LAB_004f42f7:
      if (cVar1 != '\0') {
        return 0;
      }
      goto LAB_004f3de5;
    }
    if (param_2 == 0x116) {
      FUN_004f3bac();
      goto LAB_004f3de5;
    }
    if (param_2 == 0x104) {
LAB_004f421c:
      cVar1 = FUN_004f342e();
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_004f3650(param_2);
      goto LAB_004f3de5;
    }
    if (param_2 != 0x105) {
      if (param_2 == 0x10d) {
        iVar2 = FUN_00439b5a();
        in_EAX[0x28] = -1;
        in_EAX[0x29] = iVar2;
        *(undefined1 *)(in_EAX + 0x2a) = 0;
        piVar5 = (int *)FUN_004ed9d9();
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*piVar5 + 0x18))();
        return 0;
      }
      if (param_2 == 0x10e) {
        FUN_004f44f2();
      }
      else {
        if (param_2 == 0x10f) {
          FUN_004f45b4(in_EAX);
          return 0;
        }
        if (param_2 == 0x112) {
          uVar3 = param_3 & 0xfff0;
          if (uVar3 == 0xf020) {
            cVar1 = FUN_004c14d9();
            if (cVar1 == '\0') {
              cVar1 = '\0';
            }
            else {
              cVar1 = FUN_004f44a1();
            }
            if (cVar1 != '\0') {
              return 0;
            }
            if (((uint)in_EAX[2] >> 3 & 1) == 0) {
              iVar2 = *in_EAX;
LAB_004f41af:
              (**(code **)(iVar2 + 0x30))();
              return 0;
            }
          }
          else {
            if (uVar3 == 0xf030) {
              cVar1 = FUN_004c14d9();
              if (cVar1 == '\0') {
                cVar1 = '\0';
              }
              else {
                cVar1 = FUN_004f44a1();
              }
              if (cVar1 != '\0') {
                return 0;
              }
              goto LAB_004f4172;
            }
            if (uVar3 == 0xf060) {
              cVar1 = FUN_004c14d9();
              if (cVar1 == '\0') {
                cVar1 = '\0';
              }
              else {
                cVar1 = FUN_004f44a1();
              }
              if (cVar1 != '\0') {
                return 0;
              }
              if (((uint)in_EAX[2] >> 3 & 1) != 0) {
                PostMessageW(param_1,0x10,0,0);
                return 0;
              }
            }
            else if (uVar3 == 0xf100) {
              if ((((uint)in_EAX[2] >> 3 & 1) != 0) && (pHVar4 = GetCapture(), param_1 == pHVar4)) {
                ReleaseCapture();
              }
            }
            else if (uVar3 == 0xf120) {
              cVar1 = FUN_004c14d9();
              if (cVar1 == '\0') {
                cVar1 = '\0';
              }
              else {
                cVar1 = FUN_004f44a1();
              }
              if (cVar1 != '\0') {
                return 0;
              }
              if (((uint)in_EAX[2] >> 3 & 1) == 0) {
                cVar1 = (**(code **)(*in_EAX + 0x34))();
                iVar2 = *in_EAX;
                if (cVar1 != '\0') goto LAB_004f41af;
                cVar1 = (**(code **)(iVar2 + 0x3c))();
                if (cVar1 == '\0') {
                  return 0;
                }
              }
              else {
                cVar1 = (**(code **)(*in_EAX + 0x3c))();
                if (cVar1 == '\0') goto LAB_004f3de5;
              }
LAB_004f4172:
              (**(code **)(*in_EAX + 0x38))();
              return 0;
            }
          }
        }
      }
      goto LAB_004f3de5;
    }
LAB_004f3f9b:
    cVar1 = FUN_004f33c7();
    uVar3 = param_2;
    if (cVar1 != '\0') {
      return 0;
    }
  }
  FUN_004f3650(uVar3);
LAB_004f3de5:
  uVar3 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return uVar3;
}

