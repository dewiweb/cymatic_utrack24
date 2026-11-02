// rea decompile_all
// name: FUN_00509650
// address: 0x509650
// body: available
// range: 0x509650-0x509702 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509650(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 unaff_ESI;
  float10 fVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  double dStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  undefined1 local_20 [4];
  undefined1 auStack_1c [8];
  uint uStack_14;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_28;
  dStack_2c = (double)CONCAT44(auStack_28,unaff_ESI);
  FUN_006e6400(&uStack_40);
  FUN_006ce9f0(1);
  puStack_34 = (undefined4 *)(in_ECX + 0x30);
  pcVar1 = *(code **)(**(int **)(in_ECX + 0xc) + 4);
  if (pcVar1 == FUN_0050d800) {
    puStack_34 = (undefined4 *)local_20;
    puStack_38 = (undefined1 *)0x5096a0;
    puVar2 = (undefined4 *)FUN_0063bf80();
    puStack_34 = puVar2 + 2;
    puStack_38 = (undefined1 *)0x5096ad;
    fVar3 = (float10)(**(code **)(*(int *)*puVar2 + 0xc))();
    puStack_38 = auStack_1c;
    dStack_2c = (double)fVar3;
    uStack_3c = 0x5096bf;
    (**(code **)(*piStack_24 + 0x54))();
    uStack_3c = 0;
    uStack_40 = 0x5096d6;
    FUN_0050e370();
    puStack_34 = (undefined4 *)0x5096e3;
    __security_check_cookie(uStack_14 ^ (uint)&stack0xffffffd0);
    return;
  }
  puStack_38 = (undefined1 *)0x509701;
  (*pcVar1)();
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffd4);
  return;
}

