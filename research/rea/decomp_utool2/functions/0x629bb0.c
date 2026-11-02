// rea decompile_all
// name: FUN_00629bb0
// address: 0x629bb0
// body: available
// range: 0x629bb0-0x629ce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629bb0(int *param_1,char *param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  uVar5 = param_5;
  (**(code **)(*param_1 + 0x10))("<?xml version=\"1.0\" encoding=\"",0x1e);
  uVar2 = FUN_0045d1e0(uVar5);
  (**(code **)(*param_1 + 0x10))(uVar5,uVar2);
  (**(code **)(*param_1 + 0x10))(&DAT_00c01750,3);
  cVar1 = param_3;
  if (param_3 == '\0') {
    iVar3 = param_1[1];
    uVar5 = FUN_0045d1e0(iVar3);
    (**(code **)(*param_1 + 0x10))(iVar3,uVar5);
    puVar4 = (undefined1 *)param_1[1];
    uVar5 = FUN_0045d1e0(puVar4);
    iVar3 = *param_1;
LAB_00629c46:
    (**(code **)(iVar3 + 0x10))(puVar4,uVar5);
  }
  else {
    iVar3 = *param_1;
    if (*(code **)(iVar3 + 0x14) == FUN_0062c8e0) {
      uVar5 = 1;
      puVar4 = &param_3;
      param_3 = ' ';
      goto LAB_00629c46;
    }
    (**(code **)(iVar3 + 0x14))(0x20);
  }
  if (*param_2 != '\0') {
    uVar5 = FUN_0045d1e0(param_2);
    (**(code **)(*param_1 + 0x10))(param_2,uVar5);
    if (cVar1 == '\0') {
      puVar4 = (undefined1 *)param_1[1];
      uVar5 = FUN_0045d1e0(puVar4);
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
      if (*(code **)(iVar3 + 0x14) != FUN_0062c8e0) {
        (**(code **)(iVar3 + 0x14))(0x20);
        goto LAB_00629c9e;
      }
      uVar5 = 1;
      puVar4 = &param_3;
      param_3 = ' ';
    }
    (**(code **)(iVar3 + 0x10))(puVar4,uVar5);
  }
LAB_00629c9e:
  FUN_0061a560(param_1,-(uint)(cVar1 != '\0'),param_6);
  if (cVar1 == '\0') {
    iVar3 = param_1[1];
    uVar5 = FUN_0045d1e0(iVar3);
    (**(code **)(*param_1 + 0x10))(iVar3,uVar5);
  }
  return;
}

