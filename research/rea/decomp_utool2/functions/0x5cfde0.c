// rea decompile_all
// name: FUN_005cfde0
// address: 0x5cfde0
// body: available
// range: 0x5cfde0-0x5cff31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cfde0(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  void *_Dst;
  undefined4 in_ECX;
  int *piVar5;
  int local_40;
  int local_3c;
  void *local_34;
  size_t local_24;
  undefined1 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b515;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = &DAT_00bfe12c;
  FUN_0062a9c0(&local_14,&DAT_00a9351c,&local_18);
  local_8 = 0;
  FUN_0062cb00(0x100);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*local_14 != '\0') {
    (**(code **)(local_40 + 0x10))
              ("<ebucore:ebuCoreMain xmlns:dc=\" http://purl.org/dc/elements/1.1/\" xmlns:ebucore=\"urn:ebu:metadata-schema:ebuCore_2012\"><ebucore:coreMetadata><ebucore:identifier typeLabel=\"GUID\" typeDefinition=\"Globally Unique Identifier\" formatLabel=\"ISRC\" formatDefinition=\"International Standard Recording Code\" formatLink=\"http://www.ebu.ch/metadata/cs/ebu_IdentifierTypeCodeCS.xml#3.7\"><dc:identifier>ISRC:"
               ,0x18a,uVar3);
    pcVar2 = local_14;
    uVar4 = FUN_0045d1e0(local_14);
    (**(code **)(local_40 + 0x10))(pcVar2,uVar4);
    (**(code **)(local_40 + 0x10))
              ("</dc:identifier></ebucore:identifier></ebucore:coreMetadata></ebucore:ebuCoreMain>",
               0x52);
    if (local_24 != 0) {
      _Dst = (void *)FUN_00622a60(local_24);
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,local_24);
      }
    }
  }
  FUN_0062ac80(in_ECX);
  FUN_00622b80();
  FID_conflict__free(local_34);
  piVar5 = (int *)(local_3c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
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
  ExceptionList = local_10;
  return;
}

