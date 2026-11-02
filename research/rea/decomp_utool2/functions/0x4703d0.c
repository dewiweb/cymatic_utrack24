// rea decompile_all
// name: FUN_004703d0
// address: 0x4703d0
// body: available
// range: 0x4703d0-0x470528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004703d0(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701867;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)(in_ECX + 4);
  iVar6 = *(int *)(in_ECX + 0xc) + param_1;
  ppvVar2 = &local_10;
  if (*(int *)(in_ECX + 8) < iVar6) {
    ExceptionList = &local_10;
    FUN_00409cf0(iVar6 / 2 + 8 + iVar6 & 0xfffffff8);
    ppvVar2 = ExceptionList;
  }
  while (ExceptionList = ppvVar2, param_1 = param_1 + -1, -1 < param_1) {
    puVar4 = operator_new(0x1c);
    *puVar4 = juce::ReferenceCountedObject::vftable;
    puVar4[1] = 0;
    local_8 = 1;
    *puVar4 = juce::RenderingHelpers::
              CachedGlyphEdgeTable<juce::RenderingHelpers::SoftwareRendererSavedState>::vftable;
    operator_new(0x28);
    iVar6 = FUN_00468990(uVar3);
    puVar4[2] = iVar6;
    if (iVar6 != 0) {
      LOCK();
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      UNLOCK();
    }
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    local_8 = 0xffffffff;
    iVar6 = *(int *)(in_ECX + 0xc);
    iVar5 = iVar6 + 1;
    if ((int)*(uint *)(in_ECX + 8) < iVar5) {
      if (iVar5 < 0) {
        iVar5 = iVar6 + 2;
      }
      uVar7 = iVar6 + 9 + (iVar5 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 8) != uVar7) {
        if ((int)uVar7 < 1) {
          FID_conflict__free((void *)*piVar1);
          *piVar1 = 0;
        }
        else if (*piVar1 == 0) {
          iVar6 = FUN_004c554b();
          *piVar1 = iVar6;
        }
        else {
          iVar6 = FUN_004c553b(*piVar1,uVar7 * 4);
          *piVar1 = iVar6;
        }
        *(uint *)(in_ECX + 8) = uVar7;
      }
    }
    iVar6 = *(int *)(in_ECX + 0xc);
    *(int *)(in_ECX + 0xc) = iVar6 + 1;
    *(undefined4 **)(*piVar1 + iVar6 * 4) = puVar4;
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

