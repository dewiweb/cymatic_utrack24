// rea decompile_all
// name: FUN_006a0d80
// address: 0x6a0d80
// body: available
// range: 0x6a0d80-0x6a0eac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a0d80(void)

{
  void **ppvVar1;
  void *_Memory;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722c09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    uStack_44 = 0x6a0dd6;
    puVar3 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x18) + 8))();
    FUN_0040f7f0();
    local_20 = (void *)*puVar3;
    *puVar3 = 0;
    local_1c = puVar3[1];
    local_18 = puVar3[2];
    puVar3[2] = 0;
    FUN_0040f7f0();
    uStack_44 = 0x6a0e0e;
    FID_conflict__free(local_2c);
  }
  ppvVar1 = (void **)(in_ECX + 0x1c);
  uStack_44 = 0x6a0e1d;
  cVar2 = FUN_0045d570();
  if (cVar2 == '\0') {
    if (ppvVar1 != &local_20) {
      uStack_44 = 0x6a0e31;
      FUN_0041b050();
      _Memory = *ppvVar1;
      *ppvVar1 = local_2c;
      *(undefined4 *)(in_ECX + 0x20) = local_28;
      *(undefined4 *)(in_ECX + 0x24) = local_24;
      FUN_0040f7f0();
      uStack_44 = 0x6a0e61;
      FID_conflict__free(_Memory);
    }
    FUN_006e6400(auStack_4c);
    FUN_006ce9f0(1);
    (**(code **)(*(int *)(in_ECX + -0x70) + 0x84))();
  }
  FUN_0040f7f0();
  uStack_44 = 0x6a0e96;
  FID_conflict__free(local_20);
  ExceptionList = local_10;
  return;
}

