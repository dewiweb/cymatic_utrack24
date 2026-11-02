// rea decompile_all
// name: FUN_004d7fec
// address: 0x4d7fec
// body: available
// range: 0x4d7fec-0x4d812e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d7fec(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 local_34;
  
  iVar5 = FUN_00440367();
  local_34 = 0.0;
  fVar1 = (float)param_2 + 1.0;
  fVar2 = (float)param_3 + 1.0;
  do {
    FUN_004d076d();
    FUN_0047cda7();
    fVar3 = (float)param_3 * local_34;
    fVar4 = (float)param_2 * local_34;
    FUN_0047d890(fVar4,fVar2,fVar1,fVar3);
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047d890((float)iVar5 * 0.075 + fVar4,fVar2,fVar1,(float)iVar5 * 0.075 + fVar3);
    local_34 = local_34 + 0.3;
  } while (local_34 < 1.0);
  return;
}

