// rea decompile_all
// name: FUN_00573b40
// address: 0x573b40
// body: available
// range: 0x573b40-0x573cc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573b40(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined1 local_90 [12];
  undefined1 local_84 [28];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4cee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = *(undefined4 *)(in_ECX + 0x2c);
  puVar4 = local_84;
  uVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)) + 0x98))
                    (puVar4,*(undefined2 *)(in_ECX + 0xf0),param_1,0,
                     DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_00503c30(uVar2,puVar4);
  cVar1 = FUN_005a7360(uVar3,uVar2);
  if (cVar1 != '\0') {
    FUN_00512300();
    local_8 = 0;
    puVar9 = &DAT_0095c898;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0x101;
    puVar4 = local_90;
    uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                                 *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)) + 0x98))
                      (puVar4,param_1,0x101,0,0,0,0,&DAT_0095c898,&DAT_0095c8a8);
    FUN_00535770(0,uVar3,puVar4,param_1,uVar2,uVar5,uVar6,uVar7,uVar8,puVar9);
    FUN_00529f40(local_68,0);
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

