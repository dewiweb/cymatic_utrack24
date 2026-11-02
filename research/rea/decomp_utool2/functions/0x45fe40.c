// rea decompile_all
// name: FUN_0045fe40
// address: 0x45fe40
// body: available
// range: 0x45fe40-0x45ff81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045fe40(uint param_1,undefined4 param_2)

{
  int *_Memory;
  int *_Memory_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  
  iVar4 = (int)(param_1 - 1) / 2;
  iVar3 = in_EDX;
  do {
    if (iVar4 <= iVar3) {
      if ((iVar3 == iVar4) && ((param_1 & 1) == 0)) {
        uVar2 = *(undefined4 *)(in_ECX + iVar3 * 4);
        *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
        *(undefined4 *)(in_ECX + -4 + param_1 * 4) = uVar2;
      }
      FUN_00460250(in_EDX,param_2,param_1);
      return;
    }
    iVar5 = *(int *)(in_ECX + 4 + iVar3 * 8);
    iVar1 = iVar3 * 2 + 2;
    _Memory = (int *)(iVar5 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      *_Memory = *_Memory + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(in_ECX + iVar1 * 4);
    _Memory_00 = (int *)(iVar6 + -8);
    if (_Memory_00 != &DAT_00bfe124) {
      LOCK();
      *_Memory_00 = *_Memory_00 + 1;
      UNLOCK();
    }
    if (iVar6 == iVar5) {
      iVar6 = 0;
    }
    else {
      do {
        iVar5 = FUN_00443260();
        iVar6 = FUN_00443260();
        if ((iVar5 - iVar6 != 0) && (iVar6 = (iVar5 - iVar6 >> 0x1f & 0xfffffffeU) + 1, iVar6 != 0))
        goto LAB_0045fedc;
      } while (iVar5 != 0);
      iVar6 = 0;
    }
LAB_0045fedc:
    if (_Memory_00 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *_Memory_00;
      *_Memory_00 = *_Memory_00 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(_Memory_00);
      }
    }
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar5 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    iVar5 = iVar3 * 2 + 1;
    if (-1 < iVar6) {
      iVar5 = iVar1;
    }
    uVar2 = *(undefined4 *)(in_ECX + iVar3 * 4);
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
    *(undefined4 *)(in_ECX + iVar5 * 4) = uVar2;
    iVar3 = iVar5;
  } while( true );
}

