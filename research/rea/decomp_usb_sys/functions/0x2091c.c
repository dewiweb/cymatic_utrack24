// rea decompile_all
// name: FUN_0002091c
// address: 0x2091c
// body: available
// range: 0x2091c-0x20b9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002091c(longlong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong ***ppplVar12;
  uint uVar13;
  uint *puVar14;
  longlong ***local_28;
  longlong ***local_20;
  longlong local_18;
  
  lVar11 = DAT_00029268;
  local_20 = (longlong ***)&local_28;
  uVar9 = 0;
  local_18 = 0;
  local_28 = (longlong ***)&local_28;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    *(undefined1 *)(lVar11 + 0x58) = uVar8;
    while (plVar3 = *(longlong **)(param_1 + 0xe58), plVar3 != (longlong *)(param_1 + 0xe58)) {
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
      lVar11 = (longlong)plVar3 - *(longlong *)(param_1 + 0xe68);
      if (lVar11 == 0) break;
      ppplVar12 = (longlong ***)(lVar11 + local_18);
      *ppplVar12 = *local_20;
      ppplVar12[1] = (longlong **)local_20;
      (*local_20)[1] = (longlong *)ppplVar12;
      *local_20 = (longlong **)ppplVar12;
    }
    KeReleaseSpinLock(DAT_00029268 + 0x50);
    uVar9 = 0;
    while (ppplVar12 = local_28, (longlong ****)local_28 != &local_28) {
      *local_28[1] = (longlong *)*local_28;
      (*local_28)[1] = (longlong *)local_28[1];
      local_28[1] = (longlong **)local_28;
      *local_28 = (longlong **)local_28;
      lVar11 = (longlong)ppplVar12 - local_18;
      if (lVar11 == 0) {
        return uVar9;
      }
      if ((*(char *)(param_1 + 0xb4) == '\0') || (5 < *(int *)(param_1 + 0xd8))) {
        FUN_0001f764(lVar11);
        uVar9 = 0xc0000001;
      }
      else {
        puVar4 = *(ulonglong **)(lVar11 + 0x30);
        FUN_000264d0(puVar4,0,0x8c);
        *(undefined2 *)((longlong)puVar4 + 2) = 10;
        uVar1 = *(undefined2 *)(param_1 + 0x6c);
        *(undefined4 *)((longlong)puVar4 + 4) = 0xffffffff;
        *(undefined2 *)puVar4 = uVar1;
        uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + 0x28);
        *(undefined4 *)(puVar4 + 4) = 4;
        puVar4[3] = uVar5;
        uVar9 = *(undefined4 *)(lVar11 + 0x2c);
        puVar4[5] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x24) = uVar9;
        puVar4[6] = *(ulonglong *)(lVar11 + 0x38);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(uint *)(param_1 + 0x20) >> 3);
        puVar14 = *(uint **)(lVar11 + 0x18);
        for (uVar13 = *(uint *)(lVar11 + 0x2c) >> 2; 0 < (int)uVar13; uVar13 = uVar13 - 1) {
          uVar2 = *puVar14;
          *puVar14 = (uVar2 << 0x10 | uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 |
                     (uint)*(byte *)((longlong)puVar14 + 3);
          puVar14 = puVar14 + 1;
        }
        uVar13 = 0;
        *(undefined4 *)((longlong)puVar4 + 0x84) = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x20) != 0) {
          puVar10 = (undefined4 *)((longlong)puVar4 + 0x94);
          do {
            *puVar10 = 0xffffffff;
            uVar13 = uVar13 + 1;
            puVar10 = puVar10 + 3;
          } while (uVar13 < *(uint *)(param_1 + 0x20));
        }
        lVar6 = *(longlong *)(lVar11 + 0x40);
        IoReuseIrp(lVar6);
        lVar7 = *(longlong *)(lVar6 + 0xb8);
        FUN_000264d0((ulonglong *)(lVar7 + -0x48),0,0x48);
        *(undefined1 *)(lVar7 + -0x48) = 0xf;
        *(undefined4 *)(lVar7 + -0x30) = 0x220003;
        *(ulonglong **)(lVar7 + -0x40) = puVar4;
        lVar6 = *(longlong *)(lVar6 + 0xb8);
        *(code **)(lVar6 + -0x10) = FUN_000207d0;
        *(longlong *)(lVar6 + -8) = lVar11;
        *(undefined1 *)(lVar6 + -0x45) = 0xe0;
        *(longlong *)(lVar11 + 0x48) = param_1;
        LOCK();
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
        UNLOCK();
        uVar9 = IofCallDriver(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
      }
    }
  }
  return uVar9;
}

