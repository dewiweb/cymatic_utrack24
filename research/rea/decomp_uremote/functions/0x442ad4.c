// rea decompile_all
// name: FUN_00442ad4
// address: 0x442ad4
// body: available
// range: 0x442ad4-0x442d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442ad4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 local_4c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9526;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(in_ECX + 0x88) != 0) {
    FUN_0044bfc5();
    FUN_004d076d();
    FUN_0047d23a();
    FUN_0044bfc5();
    FUN_004d076d();
    FUN_0047cda7();
    FUN_004c0902(*(undefined4 *)(in_ECX + 0x78));
    iVar1 = FUN_005b3fb0();
    if (*(int *)(in_ECX + 0x88) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(in_ECX + 0x80);
    }
    iVar4 = *(int *)(iVar4 + 0x14);
    FUN_0047888f();
    local_c = 0;
    FUN_0044bfc5();
    FUN_004432f2();
    FUN_0044bfc5();
    iVar2 = FUN_005b3fb0();
    iVar3 = FUN_005b3fb0();
    FUN_00479368(local_38,(float)iVar2,local_4c,(float)(iVar2 - iVar3),(float)(iVar4 - iVar1));
    FUN_0047d2ae();
    FUN_004f7994();
  }
  ExceptionList = local_14;
  return;
}

