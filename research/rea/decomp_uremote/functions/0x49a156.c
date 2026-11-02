// rea decompile_all
// name: FUN_0049a156
// address: 0x49a156
// body: available
// range: 0x49a156-0x49a251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49a171 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a156(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  if (in_ECX != 0) {
    if ((*(byte *)(in_ECX + 0x28) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    if ((int)(uint)*(ushort *)(in_ECX + 0xfc) < *(int *)(in_ECX + 0x100)) {
      FUN_00491371();
    }
    if (in_EAX != 0) {
      if (((*(uint *)(in_EAX + 8) & 0x200) != 0) && ((*(uint *)(in_ECX + 0x28) & 0x200) == 0)) {
        FUN_0049c3fa();
      }
      local_8 = 0;
      if (0 < *(int *)(in_EAX + 0x80)) {
        iVar3 = *(int *)(in_EAX + 0x88);
        do {
          piVar1 = (int *)(iVar4 + iVar3);
          iVar2 = *piVar1;
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              if (iVar2 == -1) {
                FUN_0049be32(piVar1[2]);
                goto LAB_0049a21c;
              }
            }
            else {
              FUN_0049bed4(piVar1[2],iVar2);
              iVar3 = *(int *)(in_EAX + 0x88);
              *(undefined4 *)(iVar4 + iVar3) = 0xfffffffe;
            }
          }
          else {
            FUN_0049bf93(iVar2,piVar1[5],piVar1[6],piVar1[2]);
LAB_0049a21c:
            iVar3 = *(int *)(in_EAX + 0x88);
            *(undefined4 *)(iVar4 + iVar3) = 0xfffffffd;
          }
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 0x1c;
        } while (local_8 < *(int *)(in_EAX + 0x80));
      }
      FUN_00499d27(8);
    }
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 8;
    FUN_0049b88b();
  }
  return;
}

