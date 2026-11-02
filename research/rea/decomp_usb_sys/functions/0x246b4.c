// rea decompile_all
// name: FUN_000246b4
// address: 0x246b4
// body: available
// range: 0x246b4-0x24916 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000246b4(uint *param_1,uint param_2,uint param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  *(undefined1 *)(param_1 + 0x14) = param_4;
  uVar5 = SUB168(ZEXT816(0x70) * ZEXT416(param_2),0);
  if (SUB168(ZEXT816(0x70) * ZEXT416(param_2),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,uVar5,0x35314e52);
  uVar11 = 0;
  if (puVar6 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar6,0,uVar5);
    iVar10 = param_2 - 1;
    if (-1 < iVar10) {
      puVar7 = puVar6 + 2;
      do {
        puVar1 = puVar7 + -2;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7[6] = 0;
        puVar7[-1] = (ulonglong)puVar1;
        puVar7[7] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
        *(undefined1 *)(puVar7 + 8) = 0;
        puVar7 = puVar7 + 0xe;
        iVar10 = iVar10 + -1;
        *puVar1 = (ulonglong)puVar1;
      } while (-1 < iVar10);
    }
  }
  *(ulonglong **)(param_1 + 8) = puVar6;
  if (puVar6 != (ulonglong *)0x0) {
    *param_1 = param_2;
    uVar9 = param_2 * param_3;
    param_1[2] = param_3;
    puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,uVar9,0x5f6e6577);
    if (puVar6 != (ulonglong *)0x0) {
      FUN_000264d0(puVar6,0,(ulonglong)uVar9);
    }
    *(ulonglong **)(param_1 + 4) = puVar6;
    if (puVar6 != (ulonglong *)0x0) {
      param_1[6] = uVar9;
      param_1[3] = 0x98;
      uVar5 = uVar11;
      if (*param_1 != 0) {
        do {
          lVar3 = uVar5 + *(longlong *)(param_1 + 8);
          *(uint **)(lVar3 + 0x10) = param_1;
          lVar8 = (ulonglong)((int)uVar11 * param_1[2]) + *(longlong *)(param_1 + 4);
          *(longlong *)(lVar3 + 0x18) = lVar8;
          *(ulonglong *)(lVar3 + 0x20) = (ulonglong)param_1[2] + lVar8;
          *(uint *)(lVar3 + 0x28) = param_1[2];
          uVar9 = param_1[3];
          puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,(ulonglong)uVar9,0x5f6e6577);
          if (puVar6 != (ulonglong *)0x0) {
            FUN_000264d0(puVar6,0,(ulonglong)uVar9);
          }
          *(ulonglong **)(lVar3 + 0x40) = puVar6;
          if (puVar6 == (ulonglong *)0x0) goto LAB_000247bd;
          uVar9 = param_1[3];
          puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,(ulonglong)uVar9,0x5f6e6577);
          if (puVar6 != (ulonglong *)0x0) {
            FUN_000264d0(puVar6,0,(ulonglong)uVar9);
          }
          *(ulonglong **)(lVar3 + 0x48) = puVar6;
          if (*(longlong *)(lVar3 + 0x40) == 0) goto LAB_000247bd;
          lVar8 = IoAllocateIrp(param_4,0);
          *(longlong *)(lVar3 + 0x60) = lVar8;
          if ((lVar8 == 0) ||
             (lVar8 = IoAllocateMdl(*(undefined8 *)(lVar3 + 0x18),param_1[2],0,0,0), lVar8 == 0))
          goto LAB_000247bd;
          MmBuildMdlForNonPagedPool(lVar8);
          *(longlong *)(lVar3 + 0x58) = lVar8;
          plVar4 = *(longlong **)(param_1 + 0xc);
          plVar2 = (longlong *)(lVar3 + *(longlong *)(param_1 + 0xe));
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
          lVar3 = *plVar4;
          plVar2[1] = (longlong)plVar4;
          *plVar2 = lVar3;
          *(longlong **)(*plVar4 + 8) = plVar2;
          *plVar4 = (longlong)plVar2;
          uVar5 = uVar5 + 0x70;
        } while (uVar9 < *param_1);
      }
      param_1[1] = *param_1;
      return 0;
    }
LAB_000247bd:
    FUN_00024920(param_1);
  }
  return 0xc0000017;
}

