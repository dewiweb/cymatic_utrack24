// rea decompile_all
// name: FUN_0043ee47
// address: 0x43ee47
// body: available
// range: 0x43ee47-0x43efa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ee47(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  undefined4 local_1c;
  
  piVar1 = (int *)(in_ECX + 0x18);
  iVar3 = *piVar1;
  iVar6 = FUN_0044bfc5();
  fVar4 = (float)(iVar3 / 2) / *(float *)(iVar6 + 0x9c);
  iVar6 = FUN_0044bfc5();
  fVar2 = *(float *)(iVar6 + 0x98);
  cVar5 = FUN_004c32c9();
  local_1c = fVar2 * fVar4;
  if (cVar5 != '\0') {
    local_1c = (float)(iVar3 / 2);
  }
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047d49c((float)*piVar1 * 0.5 - local_1c,(float)*(int *)(in_ECX + 0x1c) * 0.5 - local_1c,
               local_1c + local_1c);
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047d49c((float)(*piVar1 / 2) - fVar4,(float)(*(int *)(in_ECX + 0x1c) / 2) - fVar4,
               fVar4 + fVar4);
  return;
}

