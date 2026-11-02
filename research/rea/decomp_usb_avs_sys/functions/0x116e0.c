// rea decompile_all
// name: FUN_000116e0
// address: 0x116e0
// body: available
// range: 0x116e0-0x121c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000116e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_178 [32];
  uint in_stack_fffffffffffffeac;
  undefined2 local_148;
  ushort local_146;
  ulonglong *local_140;
  int local_138;
  int local_130;
  ushort local_128 [8];
  wchar_t *local_118;
  ushort local_110 [8];
  wchar_t local_100 [20];
  ulonglong local_d8 [20];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStackY_178;
  local_138 = 0;
  local_130 = param_2;
  RtlInitUnicodeString(&local_148,0);
  if (local_140 != (ulonglong *)0x0) {
    if (local_138 == 1) {
      RtlFreeUnicodeString(&local_148);
    }
    else if (local_138 == 2) {
      ExFreePoolWithTag(local_140,0);
    }
  }
  local_140 = local_d8;
  local_138 = 0;
  local_146 = 0xa0;
  local_148 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_1 + 0x1c4);
  bVar6 = false;
  uVar14 = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    lVar13 = param_1 + 500;
    do {
      RtlInitUnicodeString(local_110,lVar13);
      iVar3 = *(int *)(lVar13 + -0x2c);
      lVar1 = lVar13 + -0x2c;
      switch(iVar3) {
      case 1:
        uVar4 = *(uint *)(lVar13 + -0x24);
        local_148 = 0;
        FUN_0001cf40(local_140,0,(ulonglong)local_146);
        RtlAppendUnicodeToString(&local_148,L"Pcm2In");
        swprintf(local_100,0x1d0c0,(wchar_t *)(ulonglong)uVar4);
        RtlAppendUnicodeToString(&local_148,local_100);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ece0,lVar13,&local_148,
                             CONCAT44(in_stack_fffffffffffffeac,1),(undefined1 *)local_128);
        if (-1 < (int)uVar9) {
          cVar7 = IoIsWdmVersionAvailable(6,0);
          if (cVar7 != '\0') {
            uVar9 = FUN_000126b0(param_1,local_128,local_110,(short *)(param_1 + 0x34),1,lVar1);
            if (((int)uVar9 != 0) && ((int)uVar9 == -0x7fffffe6)) {
              bVar6 = true;
            }
          }
          RtlFreeUnicodeString(local_128);
          uVar9 = FUN_000121f0(param_1,&DAT_0001ecf0,lVar13,&local_148,
                               CONCAT44(in_stack_fffffffffffffeac,1),(undefined1 *)0x0);
          if (((-1 < (int)uVar9) && (param_2 != 0)) &&
             (puVar10 = (ulonglong *)ExAllocatePoolWithTag(0,0x450,0x42737661),
             puVar10 != (ulonglong *)0x0)) {
            FUN_0001cf40(puVar10,0,0x450);
            puVar11 = FUN_00019bd0(puVar10,param_1);
            if ((puVar11 != (undefined8 *)0x0) &&
               (uVar9 = FUN_00019f40((ulonglong)puVar11,lVar1,local_140,*(int *)(lVar13 + -0x28)),
               (int)uVar9 < 0)) {
              (**(code **)*puVar11)(puVar11,1);
            }
          }
        }
        break;
      case 2:
        uVar4 = *(uint *)(lVar13 + -0x24);
        pwVar12 = L"Pcm6Out";
        if (*(int *)(lVar13 + -0x28) == 2) {
          pwVar12 = L"Pcm2Out";
        }
        local_148 = 0;
        FUN_0001cf40(local_140,0,(ulonglong)local_146);
        RtlAppendUnicodeToString(&local_148,pwVar12);
        swprintf(local_100,0x1d0c0,(wchar_t *)(ulonglong)uVar4);
        RtlAppendUnicodeToString(&local_148,local_100);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ece0,lVar13,&local_148,
                             (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)local_128);
        param_2 = local_130;
        if (-1 < (int)uVar9) {
          cVar7 = IoIsWdmVersionAvailable(6,0);
          if (cVar7 != '\0') {
            uVar9 = FUN_000126b0(param_1,local_128,local_110,(short *)(param_1 + 0x34),0,lVar1);
            if (((int)uVar9 != 0) && ((int)uVar9 == -0x7fffffe6)) {
              bVar6 = true;
            }
          }
          RtlFreeUnicodeString(local_128);
          uVar9 = FUN_000121f0(param_1,&DAT_0001ed00,lVar13,&local_148,
                               (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)0x0);
          param_2 = local_130;
          if (((-1 < (int)uVar9) && (local_130 != 0)) &&
             (puVar10 = (ulonglong *)ExAllocatePoolWithTag(0,0x438,0x42737661),
             puVar10 != (ulonglong *)0x0)) {
            FUN_0001cf40(puVar10,0,0x438);
            puVar11 = FUN_0001a5a0(puVar10,param_1);
            if ((puVar11 != (undefined8 *)0x0) &&
               (uVar9 = FUN_0001a910((ulonglong)puVar11,lVar1,local_140,*(int *)(lVar13 + -0x28)),
               (int)uVar9 < 0)) {
              (**(code **)*puVar11)(puVar11,1);
            }
          }
        }
        break;
      case 3:
        uVar4 = *(uint *)(lVar13 + -0x24);
        local_148 = 0;
        FUN_0001cf40(local_140,0,(ulonglong)local_146);
        RtlAppendUnicodeToString(&local_148,L"MidiIn");
        swprintf(local_100,0x1d0c0,(wchar_t *)(ulonglong)uVar4);
        RtlAppendUnicodeToString(&local_148,local_100);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ece0,lVar13,&local_148,
                             CONCAT44(in_stack_fffffffffffffeac,1),(undefined1 *)0x0);
        if ((((-1 < (int)uVar9) &&
             (uVar9 = FUN_000121f0(param_1,&DAT_0001ecf0,lVar13,&local_148,
                                   CONCAT44(in_stack_fffffffffffffeac,1),(undefined1 *)0x0),
             -1 < (int)uVar9)) && (param_2 != 0)) &&
           (puVar10 = (ulonglong *)ExAllocatePoolWithTag(0,0xf8,0x42737661),
           puVar10 != (ulonglong *)0x0)) {
          FUN_0001cf40(puVar10,0,0xf8);
          puVar11 = FUN_0001bd90(puVar10,param_1);
          if ((puVar11 != (undefined8 *)0x0) &&
             (uVar9 = FUN_0001be30((ulonglong)puVar11,lVar1,local_140,'\x01'), (int)uVar9 < 0)) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
        break;
      case 4:
        uVar4 = *(uint *)(lVar13 + -0x24);
        local_148 = 0;
        FUN_0001cf40(local_140,0,(ulonglong)local_146);
        RtlAppendUnicodeToString(&local_148,L"MidiOut");
        swprintf(local_100,0x1d0c0,(wchar_t *)(ulonglong)uVar4);
        RtlAppendUnicodeToString(&local_148,local_100);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ece0,lVar13,&local_148,
                             (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)0x0);
        if (((-1 < (int)uVar9) &&
            (uVar9 = FUN_000121f0(param_1,&DAT_0001ed00,lVar13,&local_148,
                                  (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)0x0),
            -1 < (int)uVar9)) &&
           ((param_2 != 0 &&
            (puVar10 = (ulonglong *)ExAllocatePoolWithTag(0,0xf8,0x42737661),
            puVar10 != (ulonglong *)0x0)))) {
          FUN_0001cf40(puVar10,0,0xf8);
          puVar11 = FUN_0001bd90(puVar10,param_1);
          if ((puVar11 != (undefined8 *)0x0) &&
             (uVar9 = FUN_0001be30((ulonglong)puVar11,lVar1,local_140,'\0'), (int)uVar9 < 0)) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
        break;
      case 5:
      case 6:
        if (iVar3 == 5) {
          local_118 = L"SpdifOut";
        }
        else if (iVar3 == 6) {
          local_118 = L"SpdifPcmOut";
        }
        uVar4 = *(uint *)(lVar13 + -0x24);
        local_148 = 0;
        FUN_0001cf40(local_140,0,(ulonglong)local_146);
        RtlAppendUnicodeToString(&local_148,local_118);
        swprintf(local_100,0x1d0c0,(wchar_t *)(ulonglong)uVar4);
        RtlAppendUnicodeToString(&local_148,local_100);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ece0,lVar13,&local_148,
                             (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)local_128);
        if ((int)uVar9 < 0) {
          cVar7 = IoIsWdmVersionAvailable(6,0);
          if ((cVar7 == '\0') || ((int)uVar9 != -0x7fffffe6)) break;
          bVar6 = true;
        }
        cVar7 = IoIsWdmVersionAvailable(6,0);
        if (cVar7 != '\0') {
          uVar9 = FUN_000126b0(param_1,local_128,local_110,(short *)(param_1 + 0x34),0,lVar1);
          if (((int)uVar9 != 0) && ((int)uVar9 == -0x7fffffe6)) {
            bVar6 = true;
          }
        }
        RtlFreeUnicodeString(local_128);
        uVar9 = FUN_000121f0(param_1,&DAT_0001ed00,lVar13,&local_148,
                             (ulonglong)in_stack_fffffffffffffeac << 0x20,(undefined1 *)0x0);
        if (((-1 < (int)uVar9) && (param_2 != 0)) &&
           (puVar10 = (ulonglong *)ExAllocatePoolWithTag(0,0x460,0x42737661),
           puVar10 != (ulonglong *)0x0)) {
          FUN_0001cf40(puVar10,0,0x460);
          puVar11 = FUN_0001ae00(puVar10,param_1);
          if ((puVar11 != (undefined8 *)0x0) &&
             (uVar9 = FUN_0001b170((ulonglong)puVar11,lVar1,local_140,*(int *)(lVar13 + -0x28)),
             (int)uVar9 < 0)) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x7c;
    } while (uVar14 < *(uint *)(param_1 + 0x1c4));
    if (bVar6) {
      piVar2 = (int *)(param_1 + 0x4100);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 != 0) {
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
        uVar8 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x4098);
        *(undefined4 *)(param_1 + 0x40b0) = 1;
        *(undefined1 **)(param_1 + 0x40b8) = &LAB_00013f60;
        *(undefined8 *)(param_1 + 0x40a8) = uVar5;
        *(undefined8 *)(param_1 + 0x40c8) = 0;
        *(undefined8 *)(param_1 + 0x40d0) = 0;
        *(undefined8 *)(param_1 + 0x40d8) = 0;
        *(undefined8 *)(param_1 + 0x40e0) = 0;
        *(longlong *)(param_1 + 0x40c0) = param_1;
        KeSetTimer(param_1 + 0x4018,0xffffffffffb3b4c0,param_1 + 0x4058);
        KeReleaseSpinLock(param_1 + 0x4098,uVar8);
      }
    }
  }
  if (local_140 != (ulonglong *)0x0) {
    if (local_138 == 1) {
      RtlFreeUnicodeString(&local_148);
    }
    else if (local_138 == 2) {
      ExFreePoolWithTag(local_140,0);
    }
  }
  FUN_0001cb90(local_38 ^ (ulonglong)auStackY_178);
  return;
}

