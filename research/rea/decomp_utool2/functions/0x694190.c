// rea decompile_all
// name: FUN_00694190
// address: 0x694190
// body: available
// range: 0x694190-0x69439e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00694190(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined8 uStack_34;
  int aiStack_2c [5];
  undefined1 local_18 [20];
  
  local_44 = (undefined1 *)0x6941a3;
  FUN_00697280();
  if (*(char *)(in_ECX + 0x9a) != '\0') {
    *(undefined4 *)(in_ECX + 0x148) = 0;
    local_48 = *(undefined4 *)(in_ECX + 0xf4);
    local_44 = *(undefined1 **)(in_ECX + 0xf8);
    uStack_4c = 0x6941d7;
    FUN_00696620();
    local_44 = (undefined1 *)0x6941de;
    iVar2 = FUN_00693140();
    iVar5 = 0;
    if (iVar2 < 0) {
      iVar5 = iVar2;
    }
    if (iVar5 != *(int *)(in_ECX + 0x110)) {
      *(int *)(in_ECX + 0x110) = iVar5;
      local_44 = (undefined1 *)0x6941fe;
      FUN_004a2370();
      local_44 = (undefined1 *)0x694205;
      FUN_00696170();
      piVar3 = *(int **)(in_ECX + 0xf0);
      if (piVar3 != (int *)0x0) {
        local_44 = local_18;
        local_48 = 0x69421c;
        (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))();
        local_48 = *(undefined4 *)(in_ECX + 0x100);
        piStack_50 = aiStack_2c;
        uStack_4c = *(undefined4 *)(in_ECX + 0xfc);
        local_48 = FUN_0046fc10();
        uStack_4c = 0x69423f;
        (**(code **)(*piVar3 + 0xb0))();
      }
    }
    local_44 = (undefined1 *)0x1;
    *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(in_ECX + 0x110);
    *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0x110);
    local_48 = 0x69425a;
    local_48 = FUN_00693140();
    uStack_4c = 0x694262;
    FUN_00696020();
  }
  FUN_006e6400(&piStack_50);
  FUN_006ce9f0(1);
  piVar3 = *(int **)(in_ECX + 0xf0);
  if (piVar3 != (int *)0x0) {
    local_44 = local_18;
    local_48 = 0x69428d;
    (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))();
    local_48 = *(undefined4 *)(in_ECX + 0x100);
    piStack_50 = aiStack_2c;
    uStack_4c = *(undefined4 *)(in_ECX + 0xfc);
    local_48 = FUN_0046fc10();
    uStack_4c = 0x6942b0;
    (**(code **)(*piVar3 + 0xb0))();
  }
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    if (*(int *)(in_ECX + 0xc) == 0) {
      return;
    }
    local_44 = (undefined1 *)0x6942cf;
    piVar3 = (int *)FUN_006d1d80();
  }
  else {
    local_44 = (undefined1 *)0x6942bd;
    piVar3 = (int *)FUN_0068db10();
  }
  if (((piVar3 != (int *)0x0) && (*(char *)(in_ECX + 0x94) == '\0')) &&
     ((*(byte *)(in_ECX + 0x69) & 0x10) == 0)) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_44 = (undefined1 *)0x6942fc;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') {
        return;
      }
    }
    local_44 = (undefined1 *)(in_ECX + 0x70);
    piStack_50 = (int *)0x0;
    FUN_006cf960((int)&uStack_34 + 4,0);
    piStack_50 = (int *)(float)aiStack_2c[0];
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x2c))(local_18,(float)uStack_34._4_4_);
    uStack_34 = (double)pfVar4[1] + 6755399441055744.0;
    uStack_4c = SUB84((double)*pfVar4 + 6755399441055744.0,0);
    local_48 = (undefined4)uStack_34;
    (**(code **)(*piVar3 + 0x68))();
  }
  return;
}

