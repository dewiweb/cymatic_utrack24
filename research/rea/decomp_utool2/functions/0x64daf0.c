// rea decompile_all
// name: FUN_0064daf0
// address: 0x64daf0
// body: available
// range: 0x64daf0-0x64dc52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64dc4e to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064daf0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint in_EDX;
  uint uVar4;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(void **)(in_ECX + 0x250) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x250));
    *(undefined4 *)(in_ECX + 0x250) = 0;
  }
  uVar1 = *(uint *)(in_ECX + 0x244);
  uVar4 = 0xffffffff;
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    uVar4 = uVar1;
  }
  if (in_EDX <= uVar4) {
    *(undefined1 *)(in_ECX + 0x248) = *(undefined1 *)(in_ECX + 0xd3);
    *(undefined1 *)(in_ECX + 0x249) = *(undefined1 *)(in_ECX + 0xd2);
    *(char *)(in_ECX + 0x24a) = (char)((uint)*(undefined4 *)(in_ECX + 0xd0) >> 8);
    *(undefined1 *)(in_ECX + 0x24b) = *(undefined1 *)(in_ECX + 0xd0);
    *(undefined1 *)(in_ECX + 0x24c) = 0;
    *(uint *)(in_ECX + 0x254) = in_EDX;
    *(undefined1 *)(in_ECX + 600) = *(undefined1 *)(in_ECX + 0x28);
    if (in_EDX == 0) {
      *(undefined4 *)(in_ECX + 0x250) = 0;
    }
    else {
      iVar3 = FUN_004c554b();
      if (iVar3 == 0) {
        FUN_006563b0();
        iVar3 = 0;
      }
      *(int *)(in_ECX + 0x250) = iVar3;
    }
  }
  if (*(int *)(in_ECX + 0x250) == 0) {
    if (in_EDX != 0) {
      FUN_00650a40();
      if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
        FUN_00656080("unknown chunk exceeds memory limits");
        FUN_006563b0();
        __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
        return;
      }
LAB_0064dc4e:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
  else if (in_EDX != 0) {
    if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_0064dc4e;
    (**(code **)(in_ECX + 0x10))();
    FUN_006598a0();
  }
  FUN_00650a40();
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

