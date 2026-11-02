// rea decompile_all
// name: FUN_006f4a20
// address: 0x6f4a20
// body: available
// range: 0x6f4a20-0x6f4b35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006f4a20(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729c57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = FUN_006f3900(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar3 != '\0') {
    operator_new(0x2ca4);
    local_8 = 0;
    puVar4 = (undefined4 *)FUN_004ba9b0(in_ECX);
    ExceptionList = local_10;
    return puVar4;
  }
  local_8 = 1;
  FUN_00673a90(&local_14,2,in_ECX[4],in_ECX[5],1);
  local_8._0_1_ = 3;
  puVar4 = operator_new(0x30);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00673fa0(&local_14);
  *puVar4 = juce::OpenGLRendering::NonShaderContext::vftable;
  puVar4[5] = *in_ECX;
  puVar4[6] = in_ECX[1];
  puVar4[7] = in_ECX[2];
  puVar4[8] = in_ECX[3];
  puVar4[9] = in_ECX[4];
  puVar4[10] = in_ECX[5];
  puVar4[0xb] = local_14;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_14)(1);
      }
    }
  }
  ExceptionList = local_10;
  return puVar4;
}

