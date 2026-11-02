// rea decompile_all
// name: FUN_0049dee0
// address: 0x49dee0
// body: available
// range: 0x49dee0-0x49e114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049dee0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  float10 fVar7;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702e9c;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = false;
  if ((((*(byte *)(*(int *)(in_ECX + 0x14) + 0x69) & 0x10) != 0) ||
      ((((*(int *)(*(int *)(in_ECX + 0x14) + 0xc) != 0 &&
         (cVar3 = FUN_006e6320(local_14), cVar3 == '\0')) || (*(char *)(in_ECX + 0x13c) == '\0')) ||
       (*(double *)(in_ECX + 0x78) < *(double *)(in_ECX + 0x70) ||
        *(double *)(in_ECX + 0x78) == *(double *)(in_ECX + 0x70))))) ||
     ((*(int *)(in_ECX + 0x18) == 8 && (*(char *)(in_ECX + 0x13d) == '\0')))) {
    iVar5 = *(int *)(in_ECX + 0x14c);
    if (iVar5 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
      if (*(int *)(iVar5 + 0xa8) == 0) {
        *(undefined4 *)(iVar5 + 0xa4) = 2000;
        *(undefined4 *)(iVar5 + 0xa8) = 2000;
        local_8 = 0;
        if (DAT_00c8a668 == 0) {
          operator_new(0x54);
          DAT_00c8a668 = FUN_004635f0();
        }
        FUN_00463c00(iVar5 + 0xa0);
        local_8 = 0xffffffff;
      }
      else {
        FUN_00463b90();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    }
    goto LAB_0049e0cc;
  }
  FUN_0049e490();
  if (*(char *)(in_ECX + 0x139) == '\0') {
LAB_0049dfaf:
    bVar1 = false;
  }
  else {
    puVar4 = (undefined4 *)FUN_0063bf80(local_24);
    bVar2 = true;
    fVar7 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))(puVar4 + 2);
    if (*(double *)(in_ECX + 0x98) == (double)fVar7) goto LAB_0049dfaf;
    bVar1 = true;
  }
  if (bVar2) {
    (**(code **)(*local_24[0] + 0x54))(local_1c);
  }
  if (bVar1) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0xb8))();
    piVar6 = (int *)(*(int *)(in_ECX + 4) + 0xc);
    LOCK();
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      *piVar6 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
      UNLOCK();
    }
  }
  FUN_004addb0(0);
  puVar4 = *(undefined4 **)(in_ECX + 0x14c);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x14c) = 0;
    (**(code **)*puVar4)(1);
  }
  if (*(int *)(in_ECX + 0x18) == 8) {
    FUN_006c8640(0);
    FUN_006c8640(0);
  }
LAB_0049e0cc:
  iVar5 = *(int *)(in_ECX + 0x118);
  if (iVar5 != 0) {
    *(undefined4 *)(in_ECX + 0x118) = 0;
    local_8 = 1;
    FUN_0049bd00();
    FUN_004bfe14(iVar5,4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

