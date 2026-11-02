// rea decompile_all
// name: FUN_0067f632
// address: 0x67f632
// body: available
// range: 0x67f632-0x67f761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067f632(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  float in_XMM3_Da;
  
  FUN_0067f7a0(unaff_EBP + -4);
  FUN_0067f7a0(unaff_EBP + -8);
  uVar3 = *(uint *)(unaff_EBP + -8);
  uVar6 = *(uint *)(unaff_EBP + -4) & 0xff00ff;
  uVar5 = *(uint *)(unaff_EBP + -4) >> 8 & 0xff00ff;
  *(double *)(unaff_EBP + -0x10) = (double)(in_XMM3_Da * 255.0) + 6755399441055744.0;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  uVar2 = (((uVar3 >> 8 & 0xff00ff) - uVar5) * iVar1 & 0xffffff00) + uVar5 * 0x100;
  uVar3 = ((((uVar3 >> 8 & 0xffff00ff) - uVar5) * iVar1 & 0xffffff00) + uVar5 * 0x100 ^
          (((uVar3 & 0xff00ff) - uVar6) * iVar1 >> 8) + uVar6) & 0xff00ff ^ uVar2;
  *(uint *)(unaff_EBP + -4) = uVar3;
  uVar5 = uVar2 >> 0x18;
  if (uVar5 < 0xff) {
    if (uVar5 == 0) {
      *(ushort *)(unaff_EBP + -4) = (ushort)(byte)(uVar2 >> 0x18);
      *(undefined1 *)(unaff_EBP + -2) = 0;
      **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -4);
      return;
    }
    uVar3 = ((uint)*(byte *)(unaff_EBP + -4) * 0xff) / uVar5;
    uVar4 = 0xff;
    if (uVar3 < 0xff) {
      uVar4 = (char)uVar3;
    }
    *(undefined1 *)(unaff_EBP + -4) = uVar4;
    uVar3 = ((uint)*(byte *)(unaff_EBP + -3) * 0xff) / uVar5;
    uVar4 = 0xff;
    if (uVar3 < 0xff) {
      uVar4 = (char)uVar3;
    }
    *(undefined1 *)(unaff_EBP + -3) = uVar4;
    uVar5 = ((uint)*(byte *)(unaff_EBP + -2) * 0xff) / uVar5;
    uVar4 = 0xff;
    if (uVar5 < 0xff) {
      uVar4 = (char)uVar5;
    }
    *(undefined1 *)(unaff_EBP + -2) = uVar4;
    uVar3 = *(uint *)(unaff_EBP + -4);
  }
  **(uint **)(unaff_EBP + 8) = uVar3;
  return;
}

