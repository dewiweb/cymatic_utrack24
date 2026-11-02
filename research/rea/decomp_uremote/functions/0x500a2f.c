// rea decompile_all
// name: FUN_00500a2f
// address: 0x500a2f
// body: available
// range: 0x500a2f-0x500aa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500a2f(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  FUN_00474db1(param_1);
  iVar1 = FUN_005b3fb0();
  FUN_00474db1(param_2);
  iVar2 = FUN_005b3fb0();
  FUN_00474de5(param_3 + param_1);
  iVar3 = FUN_005b3fb0();
  FUN_00474de5(param_4 + param_2);
  iVar4 = FUN_005b3fb0();
  unaff_ESI[2] = iVar3 - iVar1;
  *unaff_ESI = iVar1;
  unaff_ESI[3] = iVar4 - iVar2;
  unaff_ESI[1] = iVar2;
  return;
}

