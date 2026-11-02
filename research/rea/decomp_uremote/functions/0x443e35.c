// rea decompile_all
// name: FUN_00443e35
// address: 0x443e35
// body: available
// range: 0x443e35-0x443fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443e35(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 local_1c;
  
  cVar3 = FUN_004c3153();
  if (cVar3 != '\0') {
    iVar4 = *(int *)(in_ECX + 0x18) / 2;
    iVar5 = FUN_0044bfc5();
    fVar2 = (float)iVar4 / *(float *)(iVar5 + 0x9c);
    iVar5 = FUN_0044bfc5();
    fVar1 = *(float *)(iVar5 + 0x98);
    cVar3 = FUN_004c32c9();
    local_1c = fVar1 * fVar2;
    if (cVar3 != '\0') {
      local_1c = (float)iVar4;
    }
    FUN_0044bfc5();
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047d49c((float)(*(int *)(in_ECX + 0x18) / 2) - local_1c,
                 (float)(*(int *)(in_ECX + 0x1c) / 2) - local_1c,local_1c + local_1c);
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047d49c((float)(*(int *)(in_ECX + 0x18) / 2) - fVar2,
                 (float)(*(int *)(in_ECX + 0x1c) / 2) - fVar2,fVar2 + fVar2);
  }
  return;
}

