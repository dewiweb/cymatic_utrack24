// rea decompile_all
// name: FUN_004cd55e
// address: 0x4cd55e
// body: available
// range: 0x4cd55e-0x4cd70a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cd55e(int *param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_004e37d9(param_2);
  fVar1 = (float10)FUN_004a5522();
  local_10 = param_1[0x2a];
  local_c = param_1[0x2b];
  local_18 = param_1[0x26];
  local_14 = param_1[0x27];
  fVar2 = (float10)FUN_004a5522();
  fVar3 = (float10)FUN_004e2fc5(param_1 + 0x24,param_2);
  fVar2 = (float10)FUN_0043bcfe(0x3c23d70a,(float)fVar2,(float)fVar3);
  fVar2 = (float10)FUN_004a8e90(0x3c23d70a,(float)fVar2);
  fVar3 = (float10)FUN_004e2fc5(param_1 + 0x25,param_2);
  fVar1 = (float10)FUN_0043bcfe(0x3c23d70a,(float)fVar1,(float)fVar3);
  fVar1 = (float10)FUN_004a8e90(0x3c23d70a,(float)fVar1);
  FUN_0049f5e8();
  FUN_0049f854((float)fVar2);
  FUN_0049f973((float)fVar1);
  (**(code **)(*param_1 + 0xb8))(&local_18);
  FUN_004c8d4f(param_1);
  FUN_004c1613(param_1);
  return;
}

