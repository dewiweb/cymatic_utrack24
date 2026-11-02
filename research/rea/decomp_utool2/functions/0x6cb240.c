// rea decompile_all
// name: FUN_006cb240
// address: 0x6cb240
// body: available
// range: 0x6cb240-0x6cb301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cb240(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072635b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a678 == 0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_0040de70(DAT_00c8a678);
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (local_18 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = local_18[2];
  }
  iVar4 = *(int *)(in_ECX + 0x20);
  while (0 < iVar4) {
    iVar4 = iVar4 + -1;
    if ((*(int *)(in_ECX + 0x20) <= iVar4) && (iVar4 = *(int *)(in_ECX + 0x20) + -1, iVar4 < 0))
    break;
    FUN_00410536(uVar3);
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_18)(1,uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

