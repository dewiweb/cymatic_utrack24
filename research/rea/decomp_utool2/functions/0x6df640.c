// rea decompile_all
// name: FUN_006df640
// address: 0x6df640
// body: available
// range: 0x6df640-0x6df853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006df640(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727f92;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x28] == 0) {
    puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0xb0))();
    puVar4 = (undefined4 *)in_ECX[0x28];
    if ((puVar4 != puVar3) && (in_ECX[0x28] = (int)puVar3, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if ((int *)in_ECX[0x28] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x28] + 0x28))();
      uStack_48 = 0x6df6b6;
      FUN_006e5050();
    }
    uStack_48 = 0x6df6c3;
    FUN_006e25d0();
    local_8 = 0;
    uStack_48 = 0x6df6d8;
    FUN_006e55f0();
    local_8 = 0xffffffff;
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    *(int *)(in_ECX[0x28] + 0x144) = in_ECX[0x32];
    if (in_ECX != (int *)0xffffff88) {
      FUN_004097d0();
    }
    uStack_48 = 0x6df73e;
    FUN_006cc500();
    iVar1 = in_ECX[0x28];
    if (iVar1 != 0) {
      FUN_0063ae00();
      local_8 = 1;
      FUN_0044ec90();
      (**(code **)(*(int *)(iVar1 + 0x70) + 0xc))();
      local_8 = 0xffffffff;
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uStack_48 = 0x6df7ab;
          FID_conflict__free(piVar5);
        }
      }
      if (*(code **)(*in_ECX + 0x84) == FUN_006e2330) {
        if (in_ECX[0x28] != 0) {
          uStack_48 = 0x6df7d2;
          puVar4 = (undefined4 *)FUN_006e6400();
          uStack_48 = puVar4[2];
          uStack_4c = puVar4[1];
          uStack_50 = *puVar4;
          FUN_006e9790();
        }
      }
      else {
        (**(code **)(*in_ECX + 0x84))();
      }
      FUN_006e6400(&uStack_50);
      FUN_006ce9f0(1);
      uStack_48 = 0x6df80e;
      (**(code **)(*in_ECX + 0xbc))();
      uStack_48 = 0;
      uStack_4c = 0x6df817;
      cVar2 = FUN_006d1aa0();
      if (cVar2 == '\0') {
        uStack_48 = 0x6df820;
        FUN_0048c530();
        uStack_48 = 0;
        uStack_50 = 0x6df82a;
        FUN_006ca6c0();
        uStack_48 = 1;
        uStack_4c = 0x6df833;
        (**(code **)(*in_ECX + 0x28))();
      }
      uStack_48 = 1;
      uStack_4c = 2;
      uStack_50 = 0x6df842;
      FUN_006cc500();
    }
  }
  ExceptionList = local_10;
  return;
}

