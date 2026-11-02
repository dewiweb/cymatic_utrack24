// rea decompile_all
// name: FUN_004f5dd0
// address: 0x4f5dd0
// body: available
// range: 0x4f5dd0-0x4f5e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5dd0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_00440367(*(undefined4 *)(unaff_EBX + 8));
  iVar1 = in_EAX[3];
  iVar3 = FUN_00440367(*(undefined4 *)(unaff_EBX + 0xc));
  uVar4 = FUN_00470645(*in_EAX,(*in_EAX - iVar2) + in_EAX[2]);
  *unaff_ESI = uVar4;
  uVar4 = FUN_00470645(in_EAX[1],(in_EAX[1] - iVar3) + iVar1);
  unaff_ESI[1] = uVar4;
  unaff_ESI[2] = iVar2;
  unaff_ESI[3] = iVar3;
  return;
}

