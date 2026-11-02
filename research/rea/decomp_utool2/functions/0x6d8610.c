// rea decompile_all
// name: FUN_006d8610
// address: 0x6d8610
// body: available
// range: 0x6d8610-0x6d875e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d8610(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,float param_8,int param_9
                 )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_6c [4];
  float local_68 [3];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (((*(byte *)(param_9 + 0x69) & 0x10) != 0) ||
     ((*(int *)(param_9 + 0xc) != 0 && (cVar1 = FUN_006e6320(), cVar1 == '\0')))) {
    param_8 = param_8 * 0.3;
  }
  local_68[2] = (float)param_3;
  local_5c = param_4;
  local_58 = param_5;
  local_54 = param_6;
  local_68[1] = 8.96831e-44;
  local_68[0] = param_8;
  uVar2 = FUN_0040e4d0(local_50);
  puVar4 = local_40;
  FUN_00673860(local_30);
  uVar3 = FUN_0040e4d0(puVar4);
  FUN_00677570(local_20,uVar3,uVar2);
  if (*(char *)((int)param_7 + 3) != -1) {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x48))(local_68[0]);
    if ((*param_2 != 0) && (cVar1 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar1 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x60))(param_2,local_20);
    }
  }
  if (((*(char *)((int)param_7 + 3) != '\0') && (FUN_00684c50(*param_7), *param_2 != 0)) &&
     (cVar1 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x34))();
    (**(code **)(*(int *)*param_1 + 0x24))(param_2,local_20);
    (**(code **)(*(int *)*param_1 + 0x2c))(local_68);
    (**(code **)(*(int *)*param_1 + 0x54))(auStack_6c,0);
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  return;
}

