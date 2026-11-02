// rea decompile_all
// name: FUN_005c6d30
// address: 0x5c6d30
// body: available
// range: 0x5c6d30-0x5c6e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005c6d30(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *_Memory;
  uint *local_24;
  uint local_20;
  uint *local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071aa90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00425b40(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (in_ECX[1] != 0) {
    FID_conflict__free((void *)*in_ECX);
    *in_ECX = 0;
    in_ECX[1] = 0;
  }
  in_ECX[2] = 0;
  local_24 = (uint *)0x0;
  local_20 = 0;
  local_8 = 0;
  iVar3 = (**(code **)(*param_1 + 0x50))(&local_24,0xc800000);
  _Memory = local_24;
  if (((iVar3 == 0) || (local_18 = local_24, local_20 < 0x11)) ||
     (cVar2 = FUN_005c5fa0(local_14,&param_1), puVar6 = local_18, cVar2 == '\0')) {
    uVar5 = 0;
  }
  else {
    local_18 = (uint *)0x0;
    iVar3 = (int)_Memory + (local_20 - (int)puVar6);
    if (iVar3 != 0) {
      iVar4 = (int)(short)param_1;
      do {
        _Memory = local_24;
        if (iVar4 <= (int)local_18) break;
        uVar7 = puVar6[1];
        uVar1 = *puVar6;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if ((int)uVar7 < 1) break;
        if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
            0x4d54726b) {
          FUN_005c5b90(puVar6 + 2,uVar7);
          iVar4 = (int)(short)param_1;
        }
        puVar6 = (uint *)((int)(puVar6 + 2) + uVar7);
        iVar3 = iVar3 + (-8 - uVar7);
        local_18 = (uint *)((int)local_18 + 1);
        _Memory = local_24;
      } while (iVar3 != 0);
    }
    uVar5 = 1;
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return uVar5;
}

