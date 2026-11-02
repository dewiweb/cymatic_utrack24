// rea decompile_all
// name: FUN_0048ede0
// address: 0x48ede0
// body: available
// range: 0x48ede0-0x48eeca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0048ede0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined1 local_c [8];
  
  *(undefined4 *)(in_ECX + 0xa0) = param_5;
  *(undefined4 *)(in_ECX + 0xa4) = param_6;
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x24))(local_c,param_3,param_4);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  FUN_0048ea00(param_1,*param_2,param_2[1],param_5,param_6);
  FUN_0048eaf0(*param_2,param_2[1],param_5,param_6,0);
  piVar4 = (int *)(*(int *)(in_ECX + 4) + 0xc);
  LOCK();
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    *piVar4 = 1;
    iVar3 = 0;
  }
  UNLOCK();
  if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
    UNLOCK();
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 8);
}

