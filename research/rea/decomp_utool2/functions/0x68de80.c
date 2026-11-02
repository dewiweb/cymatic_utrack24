// rea decompile_all
// name: FUN_0068de80
// address: 0x68de80
// body: available
// range: 0x68de80-0x68df9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068de80(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 *puVar6;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  float local_5c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  FUN_006e6400(&fStack_68);
  FUN_006ce9f0(1);
  puVar3 = *(undefined4 **)(in_ECX + 0xd4);
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      local_5c = 1.4013e-45;
      local_60 = 0x68deca;
      (**(code **)*puVar3)();
    }
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  local_5c = *(float *)(in_ECX + 0x84) * 0.7;
  local_60 = 0x41100000;
  fStack_64 = *(float *)(in_ECX + 0xb0) - (float)*(int *)(in_ECX + 0x14);
  fStack_68 = *(float *)(in_ECX + 0xac) - (float)*(int *)(in_ECX + 0x10);
  puVar6 = auStack_48;
  FUN_006e6400(auStack_38);
  uVar4 = FUN_0040e4d0(puVar6);
  puVar6 = auStack_28;
  FUN_0040e4d0(auStack_18);
  uVar5 = FUN_0040ef70(puVar6);
  FUN_0067b450(uVar5,uVar4);
  return;
}

