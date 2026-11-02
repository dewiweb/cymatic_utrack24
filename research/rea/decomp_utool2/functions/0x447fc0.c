// rea decompile_all
// name: FUN_00447fc0
// address: 0x447fc0
// body: available
// range: 0x447fc0-0x44806c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447fc0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_EAX;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar5;
  undefined4 uVar6;
  bool in_SF;
  
  if (!in_SF) {
    iVar3 = 0;
    do {
      uVar2 = in_ECX[1];
      uVar6 = *(undefined4 *)(iVar3 + *in_EAX);
      *(int *)(unaff_EBP + -8) = iVar3 + 4;
      iVar3 = in_ECX[2];
      iVar4 = iVar3 + 1;
      *(undefined4 *)(unaff_EBP + -4) = uVar6;
      if ((int)uVar2 < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar3 + 2;
        }
        uVar5 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (uVar2 != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)*in_ECX);
            *in_ECX = 0;
          }
          else if (*in_ECX == 0) {
            iVar3 = FUN_004c554b();
            *in_ECX = iVar3;
          }
          else {
            iVar3 = FUN_004c553b(*in_ECX,uVar5 * 4);
            *in_ECX = iVar3;
          }
          in_ECX[1] = uVar5;
        }
        uVar6 = *(undefined4 *)(unaff_EBP + -4);
      }
      iVar3 = in_ECX[2];
      in_ECX[2] = iVar3 + 1;
      puVar1 = (undefined4 *)(*in_ECX + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar6;
      }
      unaff_EBX = unaff_EBX + -1;
      iVar3 = *(int *)(unaff_EBP + -8);
      in_EAX = *(int **)(unaff_EBP + 8);
    } while (-1 < unaff_EBX);
  }
  return;
}

