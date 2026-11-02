// rea decompile_all
// name: FUN_0048f430
// address: 0x48f430
// body: available
// range: 0x48f430-0x48f616 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f430(void)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [8];
  undefined8 local_1c;
  undefined1 local_14 [8];
  undefined8 local_c;
  
  puVar7 = auStack_48;
  puVar4 = local_24;
  uVar6 = 2;
  uVar5 = 2;
  FUN_006cf9c0(local_14);
  FUN_00418f80(puVar4,uVar5,uVar6);
  FUN_0040e4d0(puVar7);
  FUN_004b1770();
  if ((((*(float *)(in_ECX + 0x10) < local_34) || (*(float *)(in_ECX + 0x14) < local_30)) ||
      (local_34 + local_2c <= *(float *)(in_ECX + 0x10))) ||
     (local_30 + local_28 <= *(float *)(in_ECX + 0x14))) {
    uStack_44 = 0x48f57c;
    FUN_006d2360();
    iVar1 = FUN_0040e4d0();
    local_c._4_4_ = *(float *)(iVar1 + 0xc) * 0.5 + *(float *)(iVar1 + 4);
    uStack_44 = 0x48f5c6;
    FUN_004b1670();
    *(float *)(in_ECX + 0x18) =
         *(float *)(in_ECX + 0x18) + (*(float *)(in_ECX + 0x10) - (float)local_1c);
    *(float *)(in_ECX + 0x1c) =
         *(float *)(in_ECX + 0x1c) + (*(float *)(in_ECX + 0x14) - local_1c._4_4_);
    uStack_44 = 0x48f610;
    FUN_0048e220();
  }
  else if ((*(char *)(in_ECX + 0x29) != '\0') &&
          ((*(float *)(in_ECX + 0x18) != 0.0 || (*(float *)(in_ECX + 0x1c) != 0.0)))) {
    fVar3 = *(float *)(in_ECX + 0x10) + *(float *)(in_ECX + 0x18);
    fVar2 = *(float *)(in_ECX + 0x14) + *(float *)(in_ECX + 0x1c);
    if ((local_34 <= fVar3) &&
       (((local_30 <= fVar2 && (fVar3 < local_34 + local_2c)) && (fVar2 < local_30 + local_28)))) {
      local_1c = (double)(*(float *)(in_ECX + 0x14) + *(float *)(in_ECX + 0x1c)) +
                 6755399441055744.0;
      local_c = (double)(*(float *)(in_ECX + 0x10) + *(float *)(in_ECX + 0x18)) + 6755399441055744.0
      ;
      uStack_44 = 0x48f557;
      SetCursorPos((int)local_c,(int)(float)local_1c);
      *(undefined4 *)(in_ECX + 0x18) = 0;
      *(undefined4 *)(in_ECX + 0x1c) = 0;
      return;
    }
  }
  return;
}

