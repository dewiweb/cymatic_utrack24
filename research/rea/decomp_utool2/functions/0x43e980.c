// rea decompile_all
// name: FUN_0043e980
// address: 0x43e980
// body: available
// range: 0x43e980-0x43ea8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0043e980(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_169c [4];
  int local_1698;
  undefined4 local_1694;
  undefined1 auStack_1690 [5764];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_169c;
  local_1694 = param_1;
  FUN_004364e0(param_3,param_4,param_5,&param_6,*(undefined4 *)(in_ECX + 0x18),
               *(undefined4 *)(in_ECX + 0x1c));
  local_1698 = param_6;
  if (0 < param_6) {
    iVar2 = **(int **)(in_ECX + 0x44);
    uVar4 = __allmul(*(int *)(in_ECX + 0x70),*(int *)(in_ECX + 0x70) >> 0x1f,param_4,param_5);
    (**(code **)(iVar2 + 0x58))
              ((uint)uVar4 + *(uint *)(in_ECX + 0x60),
               (int)((ulonglong)uVar4 >> 0x20) + *(int *)(in_ECX + 100) +
               (uint)CARRY4((uint)uVar4,*(uint *)(in_ECX + 0x60)));
    iVar2 = param_6;
    do {
      iVar1 = (int)(0x1680 / (longlong)*(int *)(in_ECX + 0x70));
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x44) + 0xc))
                        (auStack_1690,*(int *)(in_ECX + 0x70) * iVar1);
      iVar3 = *(int *)(in_ECX + 0x70) * iVar1;
      if (iVar2 < iVar3) {
        _memset(auStack_1690 + iVar2,0,iVar3 - iVar2);
      }
      FUN_0043ea90(local_1694,param_3,param_2,auStack_1690,*(undefined4 *)(in_ECX + 0x20),iVar1);
      param_3 = param_3 + iVar1;
      iVar2 = local_1698 - iVar1;
      local_1698 = iVar2;
    } while (0 < iVar2);
  }
  __security_check_cookie(local_c ^ (uint)auStack_169c);
  return;
}

