// rea decompile_all
// name: FUN_00648440
// address: 0x648440
// body: available
// range: 0x648440-0x648634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x648629 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648630 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648440(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int in_EDX;
  undefined2 *puVar6;
  undefined1 local_68 [80];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(in_EDX + 0xc);
  iVar2 = (uint)(*(char *)(in_EDX + 4) != '\b') * 4 + 6;
  iVar5 = FUN_00648ed0(local_68);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  FUN_00649770(iVar3 * iVar2 + 2 + iVar5);
  if (in_ECX != 0) {
    if (iVar5 + 1 != 0) {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_0064862e;
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(iVar5 + 1);
    }
    if ((in_ECX != 0) && (in_EDX != -4)) {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_0064862e;
      (**(code **)(in_ECX + 0xc))();
      FUN_006598a0(1);
    }
  }
  uVar4 = *(uint *)(in_EDX + 8);
  if (uVar4 < uVar4 + *(int *)(in_EDX + 0xc) * 10) {
    puVar6 = (undefined2 *)(uVar4 + 4);
    do {
      if (*(char *)(in_EDX + 4) == '\b') {
        local_18 = *(undefined1 *)(puVar6 + -2);
        local_17 = *(undefined1 *)(puVar6 + -1);
        local_16 = *(undefined1 *)puVar6;
        local_15 = *(undefined1 *)(puVar6 + 1);
        local_13 = (undefined1)puVar6[2];
        local_14 = (undefined1)((ushort)puVar6[2] >> 8);
      }
      else {
        local_17 = (undefined1)puVar6[-2];
        local_18 = (undefined1)((ushort)puVar6[-2] >> 8);
        local_15 = (undefined1)puVar6[-1];
        local_16 = (undefined1)((ushort)puVar6[-1] >> 8);
        local_13 = (undefined1)*puVar6;
        local_14 = (undefined1)((ushort)*puVar6 >> 8);
        local_11 = (undefined1)puVar6[1];
        local_12 = (undefined1)((ushort)puVar6[1] >> 8);
        local_f = (undefined1)puVar6[2];
        local_10 = (undefined1)((ushort)puVar6[2] >> 8);
      }
      if (in_ECX != 0) {
        if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_0064862e;
        (**(code **)(in_ECX + 0xc))();
        FUN_006598a0(iVar2);
      }
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 5;
    } while (puVar1 < (undefined2 *)(*(int *)(in_EDX + 8) + *(int *)(in_EDX + 0xc) * 10));
  }
  if (in_ECX != 0) {
    *(undefined4 *)(in_ECX + 0x26c) = 0x82;
    if (*(code **)(in_ECX + 0xc) == (code *)0x0) {
LAB_0064862e:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    (**(code **)(in_ECX + 0xc))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

