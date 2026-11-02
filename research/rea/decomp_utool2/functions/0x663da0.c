// rea decompile_all
// name: FUN_00663da0
// address: 0x663da0
// body: available
// range: 0x663da0-0x663ef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663da0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x60];
  if (*(char *)(iVar1 + 8) == '\0') {
    if ((*(char *)((int)param_1 + 0x4a) != '\0') && (param_1[0x1d] == 0)) {
      if (((char)param_1[0x14] == '\0') || (*(char *)((int)param_1 + 0x5a) == '\0')) {
        if ((char)param_1[0x16] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x6a] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x6a] = *(int *)(iVar1 + 0x18);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x67])(param_1);
    (**(code **)(param_1[0x62] + 8))(param_1);
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      if (*(char *)(iVar1 + 0x10) == '\0') {
        (**(code **)param_1[0x69])(param_1);
      }
      (**(code **)param_1[0x68])(param_1);
      if (*(char *)((int)param_1 + 0x4a) != '\0') {
        (**(code **)param_1[0x6a])(param_1,*(undefined1 *)(iVar1 + 8));
      }
      uVar2 = 0;
      if (*(char *)(iVar1 + 8) != '\0') {
        uVar2 = 3;
      }
      (**(code **)param_1[99])(param_1,uVar2);
      (**(code **)param_1[0x61])(param_1,0);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x6a])(param_1,0);
    (**(code **)param_1[99])(param_1,2);
    (**(code **)param_1[0x61])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) = (*(char *)(iVar1 + 8) != '\0') + 1 + *(int *)(iVar1 + 0xc);
    if (((char)param_1[0x10] != '\0') && (*(char *)(param_1[100] + 0x11) == '\0')) {
      *(int *)(param_1[2] + 0x10) =
           *(int *)(param_1[2] + 0x10) + (*(char *)((int)param_1 + 0x5a) != '\0') + 1;
    }
  }
  return;
}

