// rea decompile_all
// name: FUN_00451e40
// address: 0x451e40
// body: available
// range: 0x451e40-0x451f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451e40(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int in_EDX;
  char cVar4;
  int local_14;
  undefined1 local_8 [4];
  
  pcVar1 = *(code **)(*in_ECX + 0x14);
  if (pcVar1 == FUN_0062c8e0) {
    local_8[0] = 0x5b;
    (**(code **)(*in_ECX + 0x10))(local_8,1);
  }
  else {
    (*pcVar1)(0x5b);
  }
  if (0 < *(int *)(in_EDX + 8)) {
    cVar4 = (char)param_2;
    if (cVar4 == '\0') {
      iVar2 = in_ECX[1];
      uVar3 = FUN_0045d1e0(iVar2);
      (**(code **)(*in_ECX + 0x10))(iVar2,uVar3);
    }
    local_14 = 0;
    if (0 < *(int *)(in_EDX + 8)) {
      do {
        if (cVar4 == '\0') {
          (**(code **)(*in_ECX + 0x44))(0x20,param_1 + 2);
        }
        FUN_00451960(param_1 + 2,param_2);
        if (local_14 < *(int *)(in_EDX + 8) + -1) {
          if (cVar4 == '\0') {
            pcVar1 = *(code **)(*in_ECX + 0x14);
            if (pcVar1 == FUN_0062c8e0) {
              local_8[0] = 0x2c;
              (**(code **)(*in_ECX + 0x10))(local_8,1);
            }
            else {
              (*pcVar1)(0x2c);
            }
LAB_00451f1b:
            iVar2 = in_ECX[1];
            uVar3 = FUN_0045d1e0(iVar2);
            (**(code **)(*in_ECX + 0x10))(iVar2,uVar3);
          }
          else {
            (**(code **)(*in_ECX + 0x10))(&DAT_00c177b0,2);
          }
        }
        else if (cVar4 == '\0') goto LAB_00451f1b;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(in_EDX + 8));
    }
    if (cVar4 == '\0') {
      (**(code **)(*in_ECX + 0x44))(0x20,param_1);
    }
  }
  pcVar1 = *(code **)(*in_ECX + 0x14);
  if (pcVar1 == FUN_0062c8e0) {
    local_8[0] = 0x5d;
    (**(code **)(*in_ECX + 0x10))(local_8,1);
    return;
  }
  (*pcVar1)(0x5d);
  return;
}

