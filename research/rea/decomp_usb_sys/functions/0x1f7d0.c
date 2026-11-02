// rea decompile_all
// name: FUN_0001f7d0
// address: 0x1f7d0
// body: available
// range: 0x1f7d0-0x1f9d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001f7d0(uint *param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar5 = SUB168(ZEXT816(0x58) * ZEXT416(param_2),0);
  if (SUB168(ZEXT816(0x58) * ZEXT416(param_2),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,uVar5,0x5f6e6577);
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar6,0,uVar5);
    iVar11 = param_2 - 1;
    if (-1 < iVar11) {
      puVar7 = puVar6 + 2;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        puVar1 = puVar7 + -2;
        iVar11 = iVar11 + -1;
        puVar7[-1] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar7 = puVar7 + 0xb;
      } while (-1 < iVar11);
    }
  }
  *(ulonglong **)(param_1 + 10) = puVar6;
  if (puVar6 != (ulonglong *)0x0) {
    *param_1 = param_2;
    uVar10 = param_2 * param_3 * param_4;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_3 * param_4;
    puVar6 = FUN_00011878(uVar10,0x644f4342,'\x01');
    *(ulonglong **)(param_1 + 6) = puVar6;
    if (puVar6 != (ulonglong *)0x0) {
      uVar9 = 0;
      param_1[8] = uVar10;
      param_1[5] = param_4 * 0xc + 0x98;
      if (*param_1 != 0) {
        lVar12 = 0;
        do {
          lVar2 = lVar12 + *(longlong *)(param_1 + 10);
          *(uint **)(lVar2 + 0x10) = param_1;
          lVar8 = (ulonglong)(param_1[4] * uVar9) + *(longlong *)(param_1 + 6);
          *(longlong *)(lVar2 + 0x18) = lVar8;
          *(ulonglong *)(lVar2 + 0x20) = (ulonglong)param_1[4] + lVar8;
          *(uint *)(lVar2 + 0x28) = param_1[4];
          puVar6 = FUN_00011878(param_1[5],0x644f4342,'\x01');
          *(ulonglong **)(lVar2 + 0x30) = puVar6;
          if (puVar6 == (ulonglong *)0x0) goto LAB_0001f8cc;
          lVar8 = IoAllocateIrp(param_5,0);
          *(longlong *)(lVar2 + 0x40) = lVar8;
          if ((lVar8 == 0) ||
             (lVar8 = IoAllocateMdl(*(undefined8 *)(lVar2 + 0x18),param_1[4],0,0,0), lVar8 == 0))
          goto LAB_0001f8cc;
          MmBuildMdlForNonPagedPool(lVar8);
          *(longlong *)(lVar2 + 0x38) = lVar8;
          plVar4 = *(longlong **)(param_1 + 0xe);
          plVar3 = (longlong *)(lVar2 + *(longlong *)(param_1 + 0x10));
          uVar9 = uVar9 + 1;
          lVar2 = *plVar4;
          plVar3[1] = (longlong)plVar4;
          lVar12 = lVar12 + 0x58;
          *plVar3 = lVar2;
          *(longlong **)(*plVar4 + 8) = plVar3;
          *plVar4 = (longlong)plVar3;
        } while (uVar9 < *param_1);
      }
      param_1[1] = *param_1;
      return 0;
    }
LAB_0001f8cc:
    FUN_0001f9d8(param_1);
  }
  return 0xe0000002;
}

