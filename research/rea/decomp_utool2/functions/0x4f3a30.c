// rea decompile_all
// name: FUN_004f3a30
// address: 0x4f3a30
// body: available
// range: 0x4f3a30-0x4f3bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3a30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int in_ECX;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  float fVar8;
  int aiStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  int *piStack_64;
  int local_54 [4];
  int local_44 [4];
  int local_34 [4];
  int local_24 [4];
  int local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0xa4)) {
    bVar7 = *(int *)(in_ECX + 0xa4) != 0;
    local_14 = in_ECX;
    do {
      if (bVar7) {
        piVar6 = *(int **)(*(int *)(local_14 + 0x9c) + uVar5 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      piVar1 = (int *)*piVar6;
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        if (*(char *)(puVar2 + 2) != '\0') {
          *(undefined1 *)(puVar2 + 2) = 0;
          piStack_64 = (int *)0x4f3b78;
          (**(code **)(*(int *)*puVar2 + 0x34))();
        }
        piStack_64 = piVar6 + 5;
        puStack_68 = (undefined1 *)0x4f3b83;
        (**(code **)(*(int *)*puVar2 + 0x68))();
        puStack_68 = (undefined1 *)&piStack_64;
        uStack_6c = 0x4f3b95;
        FUN_006842b0();
        puStack_68 = (undefined1 *)0x4f3b9c;
        FUN_00684c50();
        piStack_64 = (int *)0x1;
        puStack_68 = (undefined1 *)0x24;
        FUN_004f2cb0(aiStack_78);
        FUN_006830c0(piVar1 + 3);
      }
      else if (iVar3 == 1) {
        if (*(char *)(puVar2 + 2) != '\0') {
          *(undefined1 *)(puVar2 + 2) = 0;
          piStack_64 = (int *)0x4f3a8c;
          (**(code **)(*(int *)*puVar2 + 0x34))();
        }
        puStack_68 = (undefined1 *)&piStack_64;
        *(undefined1 *)(puVar2 + 2) = 1;
        uStack_6c = 0x4f3aa1;
        FUN_006842b0();
        puStack_68 = (undefined1 *)0x4f3aa8;
        FUN_00684c50();
        if (*(char *)(puVar2 + 2) != '\0') {
          *(undefined1 *)(puVar2 + 2) = 0;
          piStack_64 = (int *)0x4f3ab9;
          (**(code **)(*(int *)*puVar2 + 0x34))();
        }
        piStack_64 = (int *)0x2;
        puStack_68 = (undefined1 *)0x4f3ac2;
        (**(code **)(*(int *)*puVar2 + 0x4c))();
        if (piVar6[8] == 0) {
          param_1 = (undefined4 *)0x0;
        }
        else {
          param_1 = *(undefined4 **)(piVar6[8] + 0x10);
        }
        if (piVar6[8] == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(undefined4 *)(piVar6[8] + 0xc);
        }
        piStack_64 = local_24;
        puStack_68 = (undefined1 *)0x4f3af1;
        iVar3 = FUN_004f2cb0();
        local_c = *(float *)(iVar3 + 0xc);
        piStack_64 = local_34;
        puStack_68 = (undefined1 *)0x4f3b04;
        iVar3 = FUN_004f2cb0();
        local_10 = *(float *)(iVar3 + 8);
        piStack_64 = local_44;
        puStack_68 = (undefined1 *)0x4f3b17;
        iVar3 = FUN_004f2cb0();
        fVar8 = *(float *)(iVar3 + 4);
        piStack_64 = local_54;
        puStack_68 = (undefined1 *)0x4f3b25;
        pfVar4 = (float *)FUN_004f2cb0();
        puStack_68 = (undefined1 *)param_1;
        uStack_6c = local_8;
        uStack_70 = 0;
        aiStack_78[0] = (int)local_c;
        FUN_00682f90(piVar6 + 8,(int)*pfVar4,(int)fVar8,(int)local_10);
        if (*(char *)(puVar2 + 2) == '\0') {
          piStack_64 = (int *)0x4f3b65;
          (**(code **)(*(int *)*puVar2 + 0x38))();
        }
        else {
          *(undefined1 *)(puVar2 + 2) = 0;
        }
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < *(uint *)(local_14 + 0xa4);
    } while ((int)uVar5 < (int)*(uint *)(local_14 + 0xa4));
  }
  return;
}

