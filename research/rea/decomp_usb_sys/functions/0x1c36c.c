// rea decompile_all
// name: FUN_0001c36c
// address: 0x1c36c
// body: available
// range: 0x1c36c-0x1c56d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001c36c(ulonglong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong extraout_RAX;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (((*(char *)(param_1 + 0x1bb8) == '\0') ||
      (uVar7 = param_1,
      puVar4 = (ulonglong *)
               FUN_0001bed0(param_1,*(byte **)(param_1 + 0x1b70),(uint)param_2,(uint)param_3,
                            0xffffffff,0xffffffff), puVar4 == (ulonglong *)0x0)) ||
     (lVar5 = FUN_0001c328(uVar7,param_2), lVar5 == 0)) {
    iVar3 = -0x1fffffff;
  }
  else {
    plVar1 = (longlong *)(lVar5 + *(longlong *)(param_1 + 0x1bb0));
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    while (plVar1 = *(longlong **)(lVar5 + 0x58), plVar1 != (longlong *)(lVar5 + 0x58)) {
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      if (plVar1 == (longlong *)*(longlong *)(lVar5 + 0x68)) break;
      ExFreePoolWithTag();
    }
    ExFreePoolWithTag(lVar5,0);
    uVar9 = ((uint)*(byte *)((longlong)puVar4 + 4) * 3 + -3) * 8 + 0x50;
    puVar6 = FUN_00011878(uVar9,0x644f4342,'\x01');
    if (puVar6 == (ulonglong *)0x0) {
      iVar3 = -0x1ffffffe;
    }
    else {
      FUN_000264d0(puVar6,0,(ulonglong)uVar9);
      *(undefined2 *)((longlong)puVar6 + 2) = 1;
      *(short *)puVar6 = (short)uVar9;
      uVar9 = 0;
      puVar6[3] = *(ulonglong *)(param_1 + 0x1b98);
      bVar2 = *(byte *)((longlong)puVar4 + 4);
      *(byte *)((longlong)puVar6 + 0x22) = param_2;
      *(byte *)((longlong)puVar6 + 0x23) = param_3;
      *(ushort *)(puVar6 + 4) = (bVar2 + 1) * 0x18;
      if (*(char *)((longlong)puVar4 + 4) != '\0') {
        puVar8 = (undefined4 *)((longlong)puVar6 + 0x4c);
        do {
          puVar8[-1] = 0x10000;
          *puVar8 = 4;
          if (puVar8[-4] == 1) {
            *puVar8 = 0xc;
          }
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 6;
        } while (uVar9 < *(byte *)((longlong)puVar4 + 4));
      }
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar3 = -0x3fffff63;
      }
      else {
        iVar3 = FUN_0001a36c(param_1,puVar6,*(uint *)(DAT_00029268 + 0x748));
        if (-1 < iVar3) {
          puVar4 = FUN_0001c610(param_1,puVar6 + 4,puVar4);
          iVar3 = (int)puVar4;
          if (extraout_RAX == 0) {
            iVar3 = -0x1ffffffe;
          }
        }
      }
    }
    if (puVar6 != (ulonglong *)0x0) {
      ExFreePoolWithTag(puVar6,0);
    }
  }
  return iVar3;
}

