// rea decompile_all
// name: FUN_00675a00
// address: 0x675a00
// body: available
// range: 0x675a00-0x675c65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675a00(float param_1)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_34;
  float local_c;
  
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))("newpath ",8);
  iVar4 = 0;
  fVar5 = 0.0;
  cVar3 = FUN_00679f40();
  fVar2 = param_1;
  do {
    param_1._1_3_ = (undefined3)((uint)fVar2 >> 8);
    param_1 = fVar2;
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x14);
      if (pcVar1 == FUN_0062c8e0) {
        param_1 = (float)CONCAT31(param_1._1_3_,10);
        (**(code **)(**(int **)(in_ECX + 4) + 0x10))(&param_1,1);
        return;
      }
      (*pcVar1)(10);
      return;
    }
    local_c = 0.0;
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
      iVar4 = 0;
      pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x14);
      fVar5 = local_c;
      if (pcVar1 == FUN_0062c8e0) {
        param_1 = (float)CONCAT31(param_1._1_3_,10);
        (**(code **)(**(int **)(in_ECX + 4) + 0x10))(&param_1,1);
        fVar2 = param_1;
      }
      else {
        (*pcVar1)(10);
        fVar2 = param_1;
      }
    }
    param_1 = fVar2;
    switch(local_34) {
    case 0:
      FUN_00675c80();
      uVar7 = 2;
      puVar6 = &DAT_00c02b1c;
      break;
    case 1:
      FUN_00675c80();
      uVar7 = 2;
      puVar6 = &DAT_00c02b18;
      break;
    case 2:
      param_1 = ((0.0 - fVar5) + (0.0 - fVar5)) / 3.0 + fVar5;
      FUN_00675c80();
      FUN_00675c80();
      FUN_00675c80();
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))(&DAT_00c02b24,3);
      goto switchD_00675aa6_default;
    case 3:
      FUN_00675c80();
      FUN_00675c80();
      FUN_00675c80();
      uVar7 = 3;
      puVar6 = &DAT_00c02b20;
      break;
    case 4:
      uVar7 = 3;
      puVar6 = &DAT_00c02b34;
      break;
    default:
      goto switchD_00675aa6_default;
    }
    (**(code **)(**(int **)(in_ECX + 4) + 0x10))(puVar6,uVar7);
switchD_00675aa6_default:
    fVar5 = 0.0;
    cVar3 = FUN_00679f40();
    fVar2 = param_1;
  } while( true );
}

