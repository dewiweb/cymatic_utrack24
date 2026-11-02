// rea decompile_all
// name: FUN_00013850
// address: 0x13850
// body: available
// range: 0x13850-0x13ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00013850(longlong param_1,char param_2)

{
  size_t _Size;
  int iVar1;
  ulonglong *_Dst;
  ulonglong *puVar2;
  ulonglong *puVar3;
  short sVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  short sVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 local_res10 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar14;
  undefined4 local_f8 [2];
  ulonglong *local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0 [2];
  ulonglong local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 *local_90;
  
  uVar13 = 0;
  local_res20 = 0;
  if (param_2 == '\0') {
    local_e8 = 0;
    RtlInitUnicodeString
              (local_f8,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\Audio\\Render"
              );
    local_d0 = local_f8;
    local_e0[0] = 0x30;
    local_d8 = 0;
    local_c8 = 0x240;
    local_c0 = 0;
    local_b8 = 0;
    iVar1 = ZwOpenKey(&local_res20,&DAT_0002001f,local_e0);
    if (iVar1 != 0) {
      local_res20 = uVar13;
    }
    if (local_f0 != (ulonglong *)0x0) {
      if (local_e8 == 1) {
        RtlFreeUnicodeString(local_f8);
      }
      else if (local_e8 == 2) {
        ExFreePoolWithTag(local_f0,0);
      }
    }
  }
  else {
    local_e8 = 0;
    RtlInitUnicodeString
              (local_f8,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\Audio\\Capture"
              );
    local_d0 = local_f8;
    local_e0[0] = 0x30;
    local_d8 = 0;
    local_c8 = 0x240;
    local_c0 = 0;
    local_b8 = 0;
    iVar1 = ZwOpenKey(&local_res20,&DAT_0002001f,local_e0);
    if (iVar1 != 0) {
      local_res20 = uVar13;
    }
    if (local_f0 != (ulonglong *)0x0) {
      if (local_e8 == 1) {
        RtlFreeUnicodeString(local_f8);
      }
      else if (local_e8 == 2) {
        ExFreePoolWithTag(local_f0,0);
      }
    }
  }
  if (iVar1 == 0) {
    _Dst = (ulonglong *)ExAllocatePoolWithTag(1,300,0x6e4b6e4b);
    if (_Dst == (ulonglong *)0x0) {
      if (local_res20 != 0) {
        ZwClose();
      }
    }
    else {
      FUN_0001cf40(_Dst,0,300);
      local_res18 = 0;
      puVar2 = (ulonglong *)ExAllocatePoolWithTag(1,800,0x6e4b6e4b);
      if (puVar2 != (ulonglong *)0x0) {
        FUN_0001cf40(puVar2,0,800);
        uVar11 = uVar13;
LAB_00013a80:
        uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
        *(undefined2 *)_Dst = 0;
        puVar3 = (ulonglong *)ExAllocatePoolWithTag(1,0x140,0x6e4b6e4b);
        if (puVar3 != (ulonglong *)0x0) {
          FUN_0001cf40(puVar3,0,0x140);
          iVar12 = (int)uVar11;
          local_res10[0] = 0;
          in_stack_fffffffffffffef8 = CONCAT44(uVar14,0x140);
          iVar1 = ZwEnumerateKey(local_res20,uVar11,0,puVar3,in_stack_fffffffffffffef8,local_res10);
          if (iVar1 == 0) {
            _Size = (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) >> 1) * 2;
            memcpy(_Dst,puVar3 + 2,_Size);
            *(undefined2 *)(_Size + (longlong)_Dst) = 0;
          }
          ExFreePoolWithTag(puVar3,0);
          uVar11 = local_res20;
          if (iVar1 != 0) goto LAB_00013e5d;
          sVar7 = (short)*_Dst;
          puVar3 = _Dst;
          uVar9 = uVar13;
          while (uVar8 = (uint)uVar9, sVar7 != 0) {
            puVar3 = (ulonglong *)((longlong)puVar3 + 2);
            uVar9 = (ulonglong)(uVar8 + 1);
            sVar7 = *(short *)puVar3;
          }
          lVar10 = (longlong)L"\\Properties" + (uVar9 * -2 - (longlong)_Dst);
          puVar5 = (undefined2 *)((longlong)_Dst + uVar9 * 2);
          do {
            uVar8 = uVar8 + 1;
            puVar6 = puVar5;
            if (0x95 < uVar8) break;
            puVar6 = puVar5 + 1;
            *puVar5 = *(undefined2 *)(lVar10 + (longlong)puVar5);
            puVar5 = puVar6;
          } while (*(short *)(lVar10 + (longlong)puVar6) != 0);
          *puVar6 = 0;
          if (local_res18 != 0) {
            ZwClose();
            local_res18 = 0;
          }
          local_e8 = 0;
          RtlInitUnicodeString(local_f8,_Dst);
          local_d0 = local_f8;
          local_e0[0] = 0x30;
          local_d8 = uVar11;
          local_c8 = 0x240;
          local_c0 = 0;
          local_b8 = 0;
          iVar1 = ZwOpenKey(&local_res18,&DAT_0002001f,local_e0);
          if (iVar1 != 0) {
            local_res18 = uVar13;
          }
          if (local_f0 != (ulonglong *)0x0) {
            if (local_e8 == 1) {
              RtlFreeUnicodeString(local_f8);
            }
            else if (local_e8 == 2) {
              ExFreePoolWithTag();
            }
          }
          if (iVar1 == 0) {
            local_f8[0] = 1;
            local_e8 = 800;
            local_e4 = -0x3fffffff;
            local_f0 = puVar2;
            FUN_0001cf40((ulonglong *)&local_a8,0,0x70);
            local_a8 = FUN_000142e0;
            local_98 = L"{233164c8-1b2c-4c7d-bc68-b671687a2567},1";
            local_90 = local_f8;
            local_a0 = 4;
            in_stack_fffffffffffffef8 = 0;
            iVar1 = RtlQueryRegistryValues(0x40000000,local_res18,&local_a8,0,0);
            if ((((iVar1 == 0) && (local_e4 == 0)) && ((short)*puVar2 != 0)) &&
               (uVar11 = uVar13, puVar3 = puVar2, *(short *)(param_1 + 0x34) != 0)) {
              do {
                sVar7 = *(short *)(param_1 + 0x34 + uVar11 * 2);
                sVar4 = (short)*puVar3;
                if ((ushort)(sVar7 - 0x61U) < 0x1a) {
                  sVar7 = sVar7 + -0x20;
                }
                if ((ushort)(sVar4 - 0x61U) < 0x1a) {
                  sVar4 = sVar4 + -0x20;
                }
                puVar3 = (ulonglong *)((longlong)puVar3 + 2);
                uVar11 = uVar11 + 1;
                if (sVar4 != sVar7) {
                  uVar11 = uVar13;
                }
                if (*(short *)(param_1 + 0x34 + uVar11 * 2) == 0) {
                  uVar11 = uVar13;
                  puVar3 = puVar2;
                  if (*(short *)(param_1 + 0xd4) != 0) goto LAB_00013d70;
                  goto LAB_00013e54;
                }
              } while (*(short *)puVar3 != 0);
              uVar11 = (ulonglong)(iVar12 + 1);
              goto LAB_00013a80;
            }
          }
LAB_00013e54:
          uVar11 = (ulonglong)(iVar12 + 1);
          goto LAB_00013a80;
        }
LAB_00013e5d:
        ExFreePoolWithTag(puVar2,0);
      }
      if (local_res18 != 0) {
        ZwClose();
        local_res18 = 0;
      }
      ExFreePoolWithTag(_Dst,0);
      if (local_res20 != 0) {
        ZwClose();
      }
    }
  }
  else if (local_res20 != 0) {
    ZwClose();
    return;
  }
  return;
  while (*(short *)puVar3 != 0) {
LAB_00013d70:
    sVar7 = *(short *)(param_1 + 0xd4 + uVar11 * 2);
    sVar4 = (short)*puVar3;
    if ((ushort)(sVar7 - 0x61U) < 0x1a) {
      sVar7 = sVar7 + -0x20;
    }
    if ((ushort)(sVar4 - 0x61U) < 0x1a) {
      sVar4 = sVar4 + -0x20;
    }
    puVar3 = (ulonglong *)((longlong)puVar3 + 2);
    uVar11 = uVar11 + 1;
    if (sVar4 != sVar7) {
      uVar11 = uVar13;
    }
    if (*(short *)(param_1 + 0xd4 + uVar11 * 2) == 0) {
      FUN_00013610(param_1,&local_res18,L"{f19f064d-082c-4e27-bc73-6882a1bb8e4c},0",8);
      FUN_00013610(param_1,&local_res18,L"{e4870e26-3cc5-4cd2-ba46-ca0a9a70ed04},0",8);
      FUN_00013610(param_1,&local_res18,L"{3d6e1656-2e50-4c4c-8d85-d0acae3c6c68},2",8);
      FUN_00013610(param_1,&local_res18,L"{a2a3fff4-353f-407c-9d86-1f9dc7d5a606},2",0x34);
      FUN_00013610(param_1,&local_res18,L"{a2a3fff4-353f-407c-9d86-1f9dc7d5a606},2",0x38);
      goto LAB_00013e54;
    }
  }
  uVar11 = (ulonglong)(iVar12 + 1);
  goto LAB_00013a80;
}

