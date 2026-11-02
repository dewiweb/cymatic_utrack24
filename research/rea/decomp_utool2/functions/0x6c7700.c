// rea decompile_all
// name: FUN_006c7700
// address: 0x6c7700
// body: available
// range: 0x6c7700-0x6c789b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7700(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  int *piStack_44;
  int **ppiStack_40;
  uint uStack_3c;
  int local_2c;
  float fStack_28;
  int *local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725fb9;
  local_10 = ExceptionList;
  uStack_3c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uStack_3c;
  FUN_006e6400(auStack_4c);
  FUN_006ce9f0(1);
  fStack_28 = 1.0;
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] != 0) {
      ppiStack_40 = (int **)0x6c775e;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006c7781;
    }
    if (in_ECX[0x30] == 2) {
      ppiStack_40 = (int **)0x6c7774;
      puVar3 = (undefined4 *)FUN_006c7380();
      goto LAB_006c77e5;
    }
    if (in_ECX[0x30] != 0) {
      ppiStack_40 = (int **)0x6c777f;
      puVar3 = (undefined4 *)FUN_006c7420();
      goto LAB_006c77e5;
    }
  }
  else {
LAB_006c7781:
    ppiStack_40 = local_24;
    local_8 = 0;
    piStack_44 = (int *)0x6c7797;
    puVar3 = (undefined4 *)FUN_0063bf80();
    ppiStack_40 = (int **)(puVar3 + 2);
    piStack_44 = (int *)0x6c77a4;
    cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
    piStack_44 = local_1c;
    uStack_48 = 0x6c77b2;
    (**(code **)(*local_24[0] + 0x54))();
    local_8 = 0xffffffff;
    iVar4 = 0xf0;
    if (cVar2 != '\0') {
      iVar4 = 0x100;
    }
    puVar3 = *(undefined4 **)((int)in_ECX + iVar4);
    if (puVar3 != (undefined4 *)0x0) goto LAB_006c77e5;
    fStack_28 = 0.4;
  }
  ppiStack_40 = (int **)0x6c77e3;
  puVar3 = (undefined4 *)FUN_006c74d0();
LAB_006c77e5:
  if (puVar3 != (undefined4 *)in_ECX[0x41]) {
    piStack_44 = (int *)0x6c77f7;
    ppiStack_40 = (int **)in_ECX[0x41];
    FUN_006cf2a0();
    in_ECX[0x41] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *(byte *)(puVar3 + 0x1a) = *(byte *)(puVar3 + 0x1a) & 0xef | 8;
      piVar1 = (int *)in_ECX[0x41];
      if (piVar1 != (int *)0x0) {
        ppiStack_40 = (int **)0x1;
        piStack_44 = (int *)0x6c781e;
        (**(code **)(*piVar1 + 0x28))();
        ppiStack_40 = (int **)0xffffffff;
        uStack_48 = 0x6c7828;
        piStack_44 = piVar1;
        FUN_006e5050();
      }
      ppiStack_40 = (int **)0x6c7832;
      (**(code **)(*in_ECX + 0x84))();
    }
  }
  piVar1 = (int *)in_ECX[0x41];
  if (piVar1 != (int *)0x0) {
    local_2c = SUB84((double)fStack_28 * 255.0 + 6755399441055744.0,0);
    if (local_2c < 0) {
      local_2c = 0;
    }
    else if (0xff < local_2c) {
      local_2c = 0xff;
    }
    cVar2 = -1 - (char)local_2c;
    if ((char)piVar1[0x1b] != cVar2) {
      *(char *)(piVar1 + 0x1b) = cVar2;
      ppiStack_40 = (int **)0x6c7880;
      (**(code **)(*piVar1 + 0x58))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

