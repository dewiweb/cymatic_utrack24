// rea decompile_all
// name: FUN_0064a860
// address: 0x64a860
// body: available
// range: 0x64a860-0x64a99e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64a99a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a860(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int local_8;
  
  if (in_ECX != 0) {
    if ((*(byte *)(in_ECX + 0x28) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    if ((int)(uint)*(ushort *)(in_ECX + 0xfc) < *(int *)(in_ECX + 0x100)) {
      FUN_006561c0();
    }
    if (in_EDX != 0) {
      if (((*(uint *)(in_EDX + 8) & 0x200) != 0) && ((*(uint *)(in_ECX + 0x28) & 0x200) == 0)) {
        FUN_00647310();
      }
      local_8 = 0;
      if (0 < *(int *)(in_EDX + 0x80)) {
        iVar2 = *(int *)(in_EDX + 0x88);
        iVar3 = 0;
        do {
          iVar1 = *(int *)(iVar3 + iVar2);
          if (iVar1 < 1) {
            if (iVar1 < 0) {
              if (iVar1 == -1) {
                FUN_00647c80(*(undefined4 *)(iVar3 + 8 + iVar2),iVar2);
                goto LAB_0064a942;
              }
            }
            else {
              FUN_00647b60(*(undefined4 *)(iVar3 + 8 + iVar2),iVar2,iVar1);
              iVar2 = *(int *)(in_EDX + 0x88);
              *(undefined4 *)(iVar3 + iVar2) = 0xfffffffe;
            }
          }
          else {
            FUN_00647900(*(undefined4 *)(iVar3 + 4 + iVar2),*(undefined4 *)(iVar3 + 0x14 + iVar2),
                         *(undefined4 *)(iVar3 + 0x18 + iVar2),*(undefined4 *)(iVar3 + 8 + iVar2));
LAB_0064a942:
            iVar2 = *(int *)(in_EDX + 0x88);
            *(undefined4 *)(iVar3 + iVar2) = 0xfffffffd;
          }
          iVar3 = iVar3 + 0x1c;
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(in_EDX + 0x80));
      }
      FUN_0064add0(8);
    }
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 8;
    FUN_00649770(0);
    FUN_006496e0();
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x10;
  }
  return;
}

