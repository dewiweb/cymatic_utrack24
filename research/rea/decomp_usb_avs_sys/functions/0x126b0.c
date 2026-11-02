// rea decompile_all
// name: FUN_000126b0
// address: 0x126b0
// body: available
// range: 0x126b0-0x13496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_000126b0(longlong param_1,ushort *param_2,ushort *param_3,short *param_4,int param_5,
                      longlong param_6)

{
  ushort uVar1;
  wchar_t wVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  ulonglong *_Dst;
  wchar_t *pwVar8;
  ulonglong *puVar9;
  ulonglong *_Dst_00;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  longlong lVar22;
  short *psVar23;
  uint local_res10;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined4 local_260 [2];
  ulonglong *local_258;
  int local_250;
  int local_24c;
  undefined2 local_248;
  undefined2 local_246;
  longlong local_240;
  int local_238;
  int local_230;
  int local_22c;
  int local_228;
  int local_224 [3];
  ulonglong *local_218;
  int local_210;
  int local_20c;
  code *local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined4 *local_1f0;
  code *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 *local_180;
  code *local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 *local_110;
  code *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  int *local_a0;
  
  uVar1 = *param_2;
  local_270 = 0;
  _Dst = (ulonglong *)ExAllocatePoolWithTag(1,uVar1 + 2,0x42536e4b);
  if (_Dst != (ulonglong *)0x0) {
    FUN_0001cf40(_Dst,0,(ulonglong)(uVar1 + 2));
    if (*param_2 != 0) {
      memcpy(_Dst,*(void **)(param_2 + 4),(ulonglong)*param_2);
    }
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (local_270 != 0) {
      ZwClose();
      local_270 = 0;
    }
    uVar21 = 0;
    uVar6 = IoOpenDeviceRegistryKey(uVar11,1,&DAT_0002001f,&local_270);
    if (uVar6 != 0) {
      local_270 = 0;
      ExFreePoolWithTag(_Dst,0);
      if (local_270 != 0) {
        ZwClose();
      }
      return (ulonglong)uVar6;
    }
    pwVar8 = (wchar_t *)ExAllocatePoolWithTag(1,0x400,0x6e4b6e4b);
    if (pwVar8 != (wchar_t *)0x0) {
      FUN_0001cf40((ulonglong *)pwVar8,0,0x400);
      uVar6 = 0;
      wVar2 = *pwVar8;
      pwVar20 = pwVar8;
      uVar12 = uVar21;
      while (uVar19 = (uint)uVar12, wVar2 != L'\0') {
        pwVar20 = pwVar20 + 1;
        uVar12 = (ulonglong)(uVar19 + 1);
        wVar2 = *pwVar20;
      }
      lVar22 = (longlong)L"SoundDevNameAlreadySet" + (uVar12 * -2 - (longlong)pwVar8);
      pwVar20 = pwVar8 + uVar12;
      do {
        uVar19 = uVar19 + 1;
        pwVar15 = pwVar20;
        if (0x1ff < uVar19) break;
        pwVar15 = pwVar20 + 1;
        *pwVar20 = *(wchar_t *)(lVar22 + (longlong)pwVar20);
        pwVar20 = pwVar15;
      } while (*(short *)(lVar22 + (longlong)pwVar15) != 0);
      *pwVar15 = L'\0';
      wVar2 = *pwVar8;
      pwVar20 = pwVar8;
      uVar12 = uVar21;
      while (uVar19 = (uint)uVar12, wVar2 != L'\0') {
        pwVar20 = pwVar20 + 1;
        uVar12 = (ulonglong)(uVar19 + 1);
        wVar2 = *pwVar20;
      }
      pwVar20 = pwVar8 + uVar12;
      if ((short)*_Dst != 0) {
        lVar22 = (longlong)_Dst + (uVar12 * -2 - (longlong)pwVar8);
        pwVar15 = pwVar8 + uVar12;
        do {
          uVar19 = uVar19 + 1;
          pwVar20 = pwVar15;
          if (0x1ff < uVar19) break;
          pwVar20 = pwVar15 + 1;
          *pwVar15 = *(wchar_t *)(lVar22 + (longlong)pwVar15);
          pwVar15 = pwVar20;
        } while (*(short *)(lVar22 + (longlong)pwVar20) != 0);
      }
      *pwVar20 = L'\0';
      wVar2 = *pwVar8;
      pwVar20 = pwVar8;
      while (wVar2 != L'\0') {
        if (*pwVar20 == L'\\') {
          *pwVar20 = L'_';
        }
        pwVar20 = pwVar20 + 1;
        wVar2 = *pwVar20;
      }
      puVar9 = (ulonglong *)ExAllocatePoolWithTag(1,0x400,0x6e4b6e4b);
      if (puVar9 == (ulonglong *)0x0) {
        ExFreePoolWithTag(pwVar8,0);
        ExFreePoolWithTag(_Dst,0);
        if (local_270 != 0) {
          ZwClose();
        }
        return 0xc000009a;
      }
      FUN_0001cf40(puVar9,0,0x400);
      uVar1 = *param_3;
      _Dst_00 = (ulonglong *)ExAllocatePoolWithTag(1,uVar1 + 2,0x42536e4b);
      if (_Dst_00 != (ulonglong *)0x0) {
        FUN_0001cf40(_Dst_00,0,(ulonglong)(uVar1 + 2));
        if (*param_3 != 0) {
          memcpy(_Dst_00,*(void **)(param_3 + 4),(ulonglong)*param_3);
        }
        local_260[0] = 1;
        local_250 = 0x400;
        local_24c = -0x3fffffff;
        local_258 = puVar9;
        FUN_0001cf40((ulonglong *)&local_208,0,0x70);
        local_208 = FUN_000142e0;
        local_1f0 = local_260;
        local_200 = 4;
        local_1f8 = pwVar8;
        iVar7 = RtlQueryRegistryValues(0x40000000,local_270,&local_208,0,0);
        if ((iVar7 == 0) && (local_24c == 0)) {
          sVar4 = (short)*puVar9;
          puVar10 = puVar9;
          uVar12 = uVar21;
          sVar3 = sVar4;
          while (sVar3 != 0) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 2);
            uVar12 = (ulonglong)((uint)uVar12 + 1);
            sVar3 = *(short *)puVar10;
          }
          sVar3 = (short)*_Dst_00;
          puVar10 = _Dst_00;
          uVar16 = uVar21;
          while (sVar3 != 0) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 2);
            uVar6 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar6;
            sVar3 = *(short *)puVar10;
          }
          if ((uint)uVar12 == uVar6) {
            uVar6 = 0;
            puVar10 = puVar9;
            uVar12 = uVar21;
            sVar3 = sVar4;
            while (puVar13 = puVar9, uVar16 = uVar21, sVar3 != 0) {
              puVar10 = (ulonglong *)((longlong)puVar10 + 2);
              uVar6 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar6;
              sVar3 = *(short *)puVar10;
            }
            while (sVar4 != 0) {
              sVar4 = *(short *)((longlong)puVar13 + 2);
              puVar13 = (ulonglong *)((longlong)puVar13 + 2);
              uVar16 = (ulonglong)((int)uVar16 + 1);
            }
            lVar22 = RtlCompareMemory(puVar9,_Dst_00,(ulonglong)uVar6 * 2);
            if (lVar22 == uVar16 * 2) {
              ExFreePoolWithTag(_Dst_00,0);
              ExFreePoolWithTag(puVar9,0);
              ExFreePoolWithTag(pwVar8,0);
              ExFreePoolWithTag(_Dst,0);
              if (local_270 != 0) {
                ZwClose();
              }
              return 0;
            }
          }
        }
        if (((short)*_Dst == 0) ||
           (uVar11 = FUN_000134a0((short *)_Dst,param_4,local_224), (int)uVar11 == 0)) {
          ExFreePoolWithTag(_Dst_00,0);
          ExFreePoolWithTag(puVar9,0);
          ExFreePoolWithTag(pwVar8,0);
          ExFreePoolWithTag(_Dst,0);
          if (local_270 != 0) {
            ZwClose();
          }
          return 0xc000000d;
        }
        pwVar20 = 
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\Audio\\Render"
        ;
        if (param_5 != 0) {
          pwVar20 = 
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\Audio\\Capture"
          ;
        }
        local_268 = 0;
        uVar12 = FUN_00014550(&local_268,pwVar20);
        uVar16 = uVar12 & 0xffffffff;
        if ((int)uVar12 != 0) {
          if (local_268 != 0) {
            ZwClose();
            local_268 = 0;
          }
          goto LAB_00013327;
        }
        puVar10 = (ulonglong *)ExAllocatePoolWithTag(1,300,0x6e4b6e4b);
        if (puVar10 != (ulonglong *)0x0) {
          FUN_0001cf40(puVar10,0,300);
          local_278 = 0;
          puVar13 = (ulonglong *)ExAllocatePoolWithTag(1,800,0x6e4b6e4b);
          if (puVar13 != (ulonglong *)0x0) {
            FUN_0001cf40(puVar13,0,800);
            local_res10 = 0;
LAB_00012bd0:
            uVar6 = (uint)uVar21;
            *(undefined2 *)puVar10 = 0;
            uVar19 = FUN_00014cb0(&local_268,uVar6,puVar10,0x96);
            uVar16 = (ulonglong)uVar19;
            if (uVar19 != 0) goto LAB_000132df;
            iVar7 = FUN_00014620(&local_278,local_268,puVar10,0x20019,'\0');
            if (iVar7 == 0) {
              uVar21 = 0;
              local_258 = (ulonglong *)&local_22c;
              local_260[0] = 4;
              local_22c = 0;
              local_250 = 4;
              local_24c = -0x3fffffff;
              FUN_0001cf40((ulonglong *)&local_208,0,0x70);
              local_208 = FUN_000142e0;
              local_1f8 = L"DeviceState";
              local_1f0 = local_260;
              local_200 = 4;
              iVar7 = RtlQueryRegistryValues(0x40000000,local_278,&local_208,0,0);
              if ((iVar7 != 0) || (local_24c != 0)) goto LAB_00013249;
              if (local_278 != 0) {
                ZwClose();
                local_278 = 0;
              }
              sVar3 = (short)*puVar10;
              puVar14 = puVar10;
              while (uVar19 = (uint)uVar21, sVar3 != 0) {
                puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                uVar21 = (ulonglong)(uVar19 + 1);
                sVar3 = *(short *)puVar14;
              }
              lVar22 = (longlong)L"\\Properties" + (uVar21 * -2 - (longlong)puVar10);
              puVar17 = (undefined2 *)((longlong)puVar10 + uVar21 * 2);
              do {
                uVar19 = uVar19 + 1;
                puVar18 = puVar17;
                if (0x95 < uVar19) break;
                puVar18 = puVar17 + 1;
                *puVar17 = *(undefined2 *)((longlong)puVar17 + lVar22);
                puVar17 = puVar18;
              } while (*(short *)((longlong)puVar18 + lVar22) != 0);
              *puVar18 = 0;
              iVar7 = FUN_00014620(&local_278,local_268,puVar10,0x2001f,'\0');
              if (iVar7 != 0) goto LAB_00013249;
              local_260[0] = 1;
              local_250 = 800;
              local_24c = -0x3fffffff;
              local_258 = puVar13;
              FUN_0001cf40((ulonglong *)&local_128,0,0x70);
              local_128 = FUN_000142e0;
              local_118 = L"{233164c8-1b2c-4c7d-bc68-b671687a2567},1";
              local_110 = local_260;
              local_120 = 4;
              iVar7 = RtlQueryRegistryValues(0x40000000,local_278,&local_128,0,0);
              if ((((iVar7 != 0) || (local_24c != 0)) || ((short)*puVar13 == 0)) ||
                 (uVar11 = FUN_000134a0((short *)puVar13,param_4,&local_228), (int)uVar11 == 0))
              goto LAB_00013249;
              local_258 = (ulonglong *)&local_230;
              local_230 = 0;
              local_260[0] = 4;
              local_250 = 4;
              local_24c = -0x3fffffff;
              FUN_0001cf40((ulonglong *)&local_198,0,0x70);
              local_198 = FUN_000142e0;
              local_188 = L"{1da5d803-d492-4edd-8c23-e0c0ffee7f0e},0";
              local_180 = local_260;
              local_190 = 4;
              iVar7 = RtlQueryRegistryValues(0x40000000,local_278,&local_198,0,0);
              if (((iVar7 == 0) && (local_24c == 0)) && ((local_230 != 1 && (local_230 != 2))))
              goto LAB_00013249;
              local_250 = 0;
              RtlInitUnicodeString(local_260,(longlong)_Dst + (longlong)local_224[0] * 2);
              local_238 = 0;
              RtlInitUnicodeString(&local_248,(longlong)puVar13 + (longlong)local_228 * 2);
              iVar7 = RtlCompareUnicodeString(local_260,&local_248,1);
              if (iVar7 == 0) {
                FUN_00013710(param_1,&local_278,L"{f19f064d-082c-4e27-bc73-6882a1bb8e4c},0",
                             *(uint *)(param_6 + 4),8);
                FUN_00013710(param_1,&local_278,L"{e4870e26-3cc5-4cd2-ba46-ca0a9a70ed04},0",
                             *(uint *)(param_6 + 4),8);
                FUN_00013710(param_1,&local_278,L"{3d6e1656-2e50-4c4c-8d85-d0acae3c6c68},2",
                             *(uint *)(param_6 + 4),8);
                FUN_00013710(param_1,&local_278,L"{a2a3fff4-353f-407c-9d86-1f9dc7d5a606},2",
                             *(uint *)(param_6 + 4),0x34);
                FUN_00013710(param_1,&local_278,L"{a2a3fff4-353f-407c-9d86-1f9dc7d5a606},2",
                             *(uint *)(param_6 + 4),0x38);
                local_224[1] = 1;
                local_210 = 800;
                local_20c = -0x3fffffff;
                local_218 = puVar13;
                FUN_0001cf40((ulonglong *)&local_b8,0,0x70);
                local_b8 = FUN_000142e0;
                local_a8 = L"{a45c254e-df1c-4efd-8020-67d146a850e0},2";
                local_a0 = local_224 + 1;
                local_b0 = 4;
                iVar7 = RtlQueryRegistryValues(0x40000000,local_278,&local_b8,0,0);
                if ((iVar7 == 0) && (local_20c == 0)) {
                  lVar22 = -1;
                  psVar5 = *(short **)(param_3 + 4);
                  local_210 = 0;
                  psVar23 = psVar5;
                  do {
                    if (lVar22 == 0) break;
                    lVar22 = lVar22 + -1;
                    sVar3 = *psVar23;
                    psVar23 = psVar23 + 1;
                  } while (sVar3 != 0);
                  RtlInitUnicodeString(local_224 + 1,L"{a45c254e-df1c-4efd-8020-67d146a850e0},2");
                  ZwSetValueKey(local_278,local_224 + 1,0,1,psVar5,~(uint)lVar22 * 2);
                  uVar6 = local_res10;
                  if (local_218 != (ulonglong *)0x0) {
                    if (local_210 == 1) {
                      RtlFreeUnicodeString(local_224 + 1);
                    }
                    else if (local_210 == 2) {
                      ExFreePoolWithTag(local_218,0);
                    }
                  }
                }
                uVar16 = 0;
                if (local_22c == 1) {
                  FUN_000147d0(&local_270,pwVar8,(short *)_Dst_00);
                  if (local_240 != 0) {
                    if (local_238 == 1) {
                      RtlFreeUnicodeString(&local_248);
                    }
                    else if (local_238 == 2) {
                      ExFreePoolWithTag(local_240,0);
                    }
                    local_240 = 0;
                  }
                  local_246 = 0;
                  local_248 = 0;
                  if (local_258 != (ulonglong *)0x0) {
                    if (local_250 == 1) {
                      RtlFreeUnicodeString(local_260);
                    }
                    else if (local_250 == 2) {
                      ExFreePoolWithTag(local_258,0);
                    }
                  }
                  goto LAB_000132df;
                }
                if (local_240 != 0) {
                  if (local_238 == 1) {
                    RtlFreeUnicodeString(&local_248);
                  }
                  else if (local_238 == 2) {
                    ExFreePoolWithTag(local_240,0);
                  }
                  local_240 = 0;
                }
                local_246 = 0;
                local_248 = 0;
                if (local_258 == (ulonglong *)0x0) goto LAB_00013249;
                if (local_250 == 1) {
                  RtlFreeUnicodeString(local_260);
                  goto LAB_00013249;
                }
                if (local_250 != 2) goto LAB_00013249;
                ExFreePoolWithTag(local_258,0);
                local_res10 = uVar6 + 1;
                uVar21 = (ulonglong)local_res10;
                goto LAB_00012bd0;
              }
              if (local_240 != 0) {
                if (local_238 == 1) {
                  RtlFreeUnicodeString(&local_248);
                }
                else if (local_238 == 2) {
                  ExFreePoolWithTag(local_240,0);
                }
                local_240 = 0;
              }
              local_246 = 0;
              local_248 = 0;
              if (local_258 == (ulonglong *)0x0) goto LAB_00013249;
              if (local_250 == 1) {
                RtlFreeUnicodeString(local_260);
                local_res10 = uVar6 + 1;
                uVar21 = (ulonglong)local_res10;
                goto LAB_00012bd0;
              }
              if (local_250 == 2) {
                ExFreePoolWithTag(local_258,0);
                local_res10 = uVar6 + 1;
                uVar21 = (ulonglong)local_res10;
                goto LAB_00012bd0;
              }
            }
LAB_00013249:
            local_res10 = uVar6 + 1;
            uVar21 = (ulonglong)local_res10;
            goto LAB_00012bd0;
          }
          if (local_278 != 0) {
            ZwClose();
            local_278 = 0;
          }
          ExFreePoolWithTag(puVar10,0);
        }
        if (local_268 != 0) {
          ZwClose();
          local_268 = 0;
        }
        ExFreePoolWithTag(_Dst_00,0);
      }
      ExFreePoolWithTag(puVar9,0);
      ExFreePoolWithTag(pwVar8,0);
      ExFreePoolWithTag(_Dst,0);
      if (local_270 != 0) {
        ZwClose();
      }
      return 0xc000009a;
    }
    ExFreePoolWithTag(_Dst,0);
  }
  if (local_270 != 0) {
    ZwClose();
  }
  return 0xc000009a;
LAB_000132df:
  ExFreePoolWithTag(puVar13,0);
  if (local_278 != 0) {
    ZwClose();
    local_278 = 0;
  }
  ExFreePoolWithTag(puVar10,0);
  if (local_268 != 0) {
    ZwClose();
    local_268 = 0;
  }
LAB_00013327:
  ExFreePoolWithTag(_Dst_00,0);
  ExFreePoolWithTag(puVar9,0);
  ExFreePoolWithTag(pwVar8,0);
  ExFreePoolWithTag(_Dst,0);
  if (local_270 != 0) {
    ZwClose();
  }
  return uVar16;
}

