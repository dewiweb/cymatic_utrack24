// rea decompile_all
// name: FUN_004d5ec0
// address: 0x4d5ec0
// body: available
// range: 0x4d5ec0-0x4d5fa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5ec0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e19dc;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  (**(code **)(*in_ECX + 0x10))();
  puStack_10 = (undefined1 *)0x0;
  FUN_0049f995();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  FUN_0047ceaa();
  FUN_004c4d7a();
  local_14 = (void *)0xffffffff;
  FUN_004c4d7a();
  FUN_004d3044();
  FUN_0047cda7();
  iVar1 = param_2[2];
  iVar2 = param_2[1];
  iVar3 = *param_2;
  uVar4 = FUN_005b3fb0();
  FUN_0047d12a(iVar3 + 0xc,iVar2,iVar1 + -0x10,uVar4);
  ExceptionList = pvStack_1c;
  return;
}

