// rea decompile_all
// name: FUN_0001acd8
// address: 0x1acd8
// body: available
// range: 0x1acd8-0x1b095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001acd8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_res8 [2];
  undefined8 local_28;
  ulonglong uStack_20;
  
  uVar13 = 0;
  uVar12 = 0;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  if (*(int *)(param_1 + 0x18) != 0) {
    KeReleaseMutex(DAT_00029268 + 0x18,0);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0xe0000050;
    IofCompleteRequest(param_2,0);
    return 0xe0000050;
  }
  lVar10 = *(longlong *)(param_2 + 0xb8);
  puVar5 = *(uint **)(param_2 + 0x18);
  uVar9 = *(uint *)(lVar10 + 0x10);
  uVar3 = *(uint *)(lVar10 + 8);
  lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x18);
  iVar4 = *(int *)(lVar10 + 0x18);
  if (iVar4 == -0x7f76dffc) {
    local_res8[0] = uVar3;
    if (7 < uVar9) {
      uVar9 = FUN_0001ba7c(param_1,(int *)puVar5,local_res8,puVar5);
      uVar12 = (ulonglong)uVar9;
      *(uint *)(param_2 + 0x30) = uVar9;
      if (-1 < (int)uVar9) {
        uVar13 = (ulonglong)local_res8[0];
      }
      *(ulonglong *)(param_2 + 0x38) = uVar13;
      goto LAB_0001b062;
    }
LAB_0001aebb:
    uVar9 = 0xe0000036;
LAB_0001addc:
    uVar12 = (ulonglong)uVar9;
    *(uint *)(param_2 + 0x30) = uVar9;
LAB_0001adc3:
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else {
    if (iVar4 == -0x7f76dff8) {
      if (3 < uVar9) {
        if ((*puVar5 == 0) || (100 < *puVar5)) {
          uVar12 = 0xe0000030;
        }
        else {
          uVar12 = FUN_000244b4((longlong *)(lVar6 + 0x60),*puVar5);
          uVar12 = uVar12 & 0xffffffff;
        }
        goto LAB_0001adc0;
      }
      goto LAB_0001aebb;
    }
    if (iVar4 == -0x7f76dff4) {
      *(byte *)(lVar10 + 3) = *(byte *)(lVar10 + 3) | 1;
      lVar10 = lVar6 + 0x30;
      uVar8 = KeAcquireSpinLockRaiseToDpc(lVar10);
      *(undefined1 *)(lVar6 + 0x38) = uVar8;
      LOCK();
      *(code **)(param_2 + 0x68) = FUN_0001164c;
      UNLOCK();
      if (*(char *)(param_2 + 0x44) == '\0') {
LAB_0001af94:
        *(longlong *)(param_2 + 0x90) = lVar10;
        plVar1 = (longlong *)(param_2 + 0xa8);
        puVar7 = *(undefined8 **)(lVar6 + 0x48);
        *plVar1 = lVar6 + 0x40;
        *(undefined8 **)(param_2 + 0xb0) = puVar7;
        *puVar7 = plVar1;
        *(longlong **)(lVar6 + 0x48) = plVar1;
        KeReleaseSpinLock(lVar10,CONCAT71((int7)((ulonglong)(lVar6 + 0x40) >> 8),
                                          *(undefined1 *)(lVar6 + 0x38)));
      }
      else {
        LOCK();
        lVar2 = *(longlong *)(param_2 + 0x68);
        *(longlong *)(param_2 + 0x68) = 0;
        UNLOCK();
        if (lVar2 == 0) goto LAB_0001af94;
        KeReleaseSpinLock(lVar10,*(undefined1 *)(lVar6 + 0x38));
        *(undefined4 *)(param_2 + 0x30) = 0xc0000120;
        *(undefined8 *)(param_2 + 0x38) = 0;
        IofCompleteRequest(param_2,0);
      }
      lVar10 = DAT_00029268;
      uVar12 = 0x103;
      uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar10 + 0x58) = uVar8;
      FUN_0001dbe4(lVar6);
      KeReleaseSpinLock(DAT_00029268 + 0x50,*(undefined1 *)(DAT_00029268 + 0x58));
      goto LAB_0001b068;
    }
    if (iVar4 == -0x7f76dff0) {
      FUN_000116c8(lVar6 + 0x30,(longlong **)0x0);
      *(undefined4 *)(param_2 + 0x30) = 0;
      goto LAB_0001adc3;
    }
    if (iVar4 != -0x7f76dfec) {
      if (iVar4 == -0x7f76dfe8) {
        lVar10 = IoAllocateIrp(CONCAT71((int7)((ulonglong)lVar10 >> 8),
                                        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4c)));
        if (lVar10 == 0) {
          uVar12 = 0x102;
        }
        else {
          lVar6 = *(longlong *)(lVar10 + 0xb8);
          puVar11 = (ulonglong *)(lVar6 + -0x48);
          *(undefined4 *)(lVar10 + 0x30) = 0xc00000bb;
          FUN_000264d0(puVar11,0,0x48);
          lVar2 = DAT_00029268;
          *(undefined1 *)puVar11 = 0xf;
          *(undefined4 *)(lVar6 + -0x30) = 0x22001f;
          uVar9 = FUN_000126fc(param_1,lVar10,*(uint *)(lVar2 + 0x748));
          uVar12 = (ulonglong)uVar9;
          IoFreeIrp(lVar10);
        }
LAB_0001adc0:
        *(int *)(param_2 + 0x30) = (int)uVar12;
        goto LAB_0001adc3;
      }
      uVar12 = uVar13;
      if (iVar4 == -0x7f76d7fc) {
        if (uVar3 == 0xc) {
          *(undefined1 *)puVar5 = 3;
          *(undefined1 *)((longlong)puVar5 + 1) = 0;
          *(undefined1 *)((longlong)puVar5 + 2) = 6;
          *(undefined1 *)((longlong)puVar5 + 3) = 0x13;
          puVar5[1] = 1;
          puVar5[2] = 0;
          *(undefined4 *)(param_2 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0xc;
        }
        else {
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined4 *)(param_2 + 0x30) = 0xe0000037;
          uVar12 = 0xe0000037;
        }
        goto LAB_0001b062;
      }
      if (iVar4 != -0x7f76d500) {
        uVar12 = 0xe0000035;
        goto LAB_0001adc0;
      }
      if (uVar3 == 0x200) {
        FUN_0001a400(param_1,puVar5);
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x200;
        goto LAB_0001b062;
      }
      uVar9 = 0xe0000037;
      goto LAB_0001addc;
    }
    if (uVar9 < 0x10) goto LAB_0001aebb;
    if ((char)*puVar5 == '\0') {
      if (uVar9 < *(ushort *)((longlong)puVar5 + 0xe) + 0x10) {
        *(undefined4 *)(param_2 + 0x30) = 0xe0000036;
        *(undefined8 *)(param_2 + 0x38) = 0;
        IofCompleteRequest(param_2,0);
      }
      puVar14 = puVar5 + 4;
      if ((char)*puVar5 != '\0') goto LAB_0001aef7;
    }
    else {
LAB_0001aef7:
      puVar14 = puVar5;
    }
    local_28 = *(undefined8 *)puVar5;
    uStack_20 = *(ulonglong *)(puVar5 + 2);
    uVar9 = FUN_0001bcd4(param_1,(char *)&local_28,puVar14);
    uVar12 = (ulonglong)uVar9;
    if (-1 < (int)uVar9) {
      uVar13 = uStack_20 >> 0x30;
    }
    *(uint *)(param_2 + 0x30) = uVar9;
    *(ulonglong *)(param_2 + 0x38) = uVar13;
  }
LAB_0001b062:
  IofCompleteRequest(param_2,0);
LAB_0001b068:
  KeReleaseMutex(DAT_00029268 + 0x18,0);
  return uVar12;
}

